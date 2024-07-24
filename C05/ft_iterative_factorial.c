int ft_iterative_factorial(int nb)
{
	int result;
	int	i;

	i = 1;
	result = 1;	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while(i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/* #include <stdio.h>

int main(void) 
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, ft_iterative_factorial(number));
    return (0);
} */