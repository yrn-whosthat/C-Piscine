#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    search_and_replace(char *str, char old, char new)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == old)
            ft_putchar(new);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        search_and_replace(argv[1], argv[2][0], argv [3][0]);
    }
    ft_putchar('\n');
    return (0);
}