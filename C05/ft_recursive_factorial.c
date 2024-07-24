int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
    
}

/* #include <stdio.h>

int main(void) 
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, ft_recursive_factorial(number));
    return (0);
} */