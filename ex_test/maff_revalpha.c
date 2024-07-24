#include <unistd.h>

int main(void)
{
    char    c;
    int     i;
    char    lowercase;

    c = 'z';
    i = 1;
    while(c >= 'a')
    {
        if (i % 2 == 0)
        {   
            lowercase = c - 32;
            write(1, &lowercase, 1);
        }
        else
            write(1, &c, 1);
        c--;
        i++;
    }
    write(1, "\n", 1);
    return (0);
}