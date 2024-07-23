#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
	int	i;
    int	first_letter;

	i = 0;
	first_letter = 1;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (first_letter)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				first_letter = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else
			first_letter = 1;
		i++;
	}
	return(str);
}

/*int	main(void)
{
	char	x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Original: %s\n", x);
	printf("After: %s\n", ft_strcapitalize(x));
}
*/