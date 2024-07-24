#include <unistd.h>

int main(void)
{
    char    c;
    int     i;
    char    uppercase;

    c = 'a';
    i = 1;
    while(c <= 'z')
    {
        if (i % 2 == 0)
        {
            uppercase = c - 32;
            write(1, &uppercase, 1);
        }
        else
            write(1, &c, 1);
        c++;
        i++;
    }
    write(1, "\n", 1);
    return (0);
}