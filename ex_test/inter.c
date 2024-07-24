#include <unistd.h>

int main(int ac, char **av)
{
    char *str1;
	char *str2;
	int	i;
	int	j;

	i = 0;
	if (ac != 3)
    {    
		write(1, "\n", 1);
		return (0);
	}
	str1 = av[1];
	str2 = av[2];
	while(str1[i])
	{
		j = 0;
		while (str2[j])
		{

		}
	}

}

