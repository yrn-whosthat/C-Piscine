int ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return(i);
		i++;
	}
	return (0);
    
}

#include <stdio.h>

/* int main() 
{
    printf("ft_sqrt(4) = %d\n", ft_sqrt(4));
    printf("ft_sqrt(10) = %d\n", ft_sqrt(10));
    printf("ft_sqrt(16) = %d\n", ft_sqrt(16));
    printf("ft_sqrt(-1) = %d\n", ft_sqrt(-1));
    printf("ft_sqrt(0) = %d\n", ft_sqrt(0));
    printf("ft_sqrt(25) = %d\n", ft_sqrt(25));
} */