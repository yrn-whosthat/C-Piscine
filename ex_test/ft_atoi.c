#include <stdio.h>

int ft_atoi(const char *str)
{
    int sign;
    int number;

    sign = 1;
    number = 0;
    while((*str >= 9 && *str <= 13) || *str == 32 )
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        number = number * 10 + *str - '0';
        str++;
    }
    return (sign * number);
}

int main(void)
{
    char    c[] = "       \n\n\v\f\r\t -5234AAAgreghrsth";
    printf("%d\n", ft_atoi(c));
}