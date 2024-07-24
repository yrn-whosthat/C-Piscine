#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*duplicate;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while(src[len])
		len++;
	duplicate = (char *)malloc(1 * len +1);
	if (!duplicate)
		return (NULL);
	while(i < len)
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

#include <stdio.h>

int main(void) 
{
    char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);
    } else {
        printf("Memory allocation failed\n");
    }
    return 0;
}