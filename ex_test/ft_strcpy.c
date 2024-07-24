char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1 = "\0";
    return (0);
}

/* #include <stdio.h>
int main(void)
{
    char    x[] = "Hello";
    char    y[] = "World";
    ft_strcpy(x, y);
    printf("%s\n", x);
} */