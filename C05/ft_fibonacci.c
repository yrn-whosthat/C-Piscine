int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1 ) + ft_fibonacci(index - 2));
}
/* #include <stdio.h>
int	main(void)
{
	printf("Fibonacci of 0: %d\n", ft_fibonacci(0));
    printf("Fibonacci of 1: %d\n", ft_fibonacci(1));
    printf("Fibonacci of 2: %d\n", ft_fibonacci(2));
    printf("Fibonacci of 3: %d\n", ft_fibonacci(3));
    printf("Fibonacci of 4: %d\n", ft_fibonacci(4));
    printf("Fibonacci of 5: %d\n", ft_fibonacci(5));
    printf("Fibonacci of 10: %d\n", ft_fibonacci(10));
    printf("Fibonacci of -1: %d\n", ft_fibonacci(-1));
    return 0;
} */