int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/* #include <stdio.h>

int main(void) 
{
    int number = 5;
	int	power = 5;
    printf(" Power %d of %d is %d\n", power, number, ft_iterative_power(number, power));
    return (0);
} */