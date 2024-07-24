int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb /2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	int	a = 1;
	int	b = 5;
	int	c = 4;
	int d = 89;
	printf("%d\n", ft_is_prime(a));
	printf("%d\n", ft_is_prime(b));
	printf("%d\n", ft_is_prime(c));
	printf("%d\n", ft_is_prime(d));

} */