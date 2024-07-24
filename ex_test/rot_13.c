#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int logic(char c)
{
    if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
        c += 13;
    else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
        c -= 13;
    return (c);
}

int main(int ac, char **av)
{
    int     i;

    i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            ft_putchar(logic(av[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}