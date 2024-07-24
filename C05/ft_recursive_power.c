int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>

int main(void) 
{
    int number = 5;
	int	power = 5;
    printf(" Power %d of %d is %d\n", power, number, ft_recursive_power(number, power));
    return (0);
} */