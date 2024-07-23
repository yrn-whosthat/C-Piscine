#include <unistd.h>
#include <stdlib.h>

#define N 4

int is_valid_digit(char c)
{
    return (c >= '1' && c <= '4');
}

int **allocate_key()
{
    int **key;
    int i = 0;

    key = (int**)malloc(N * 8);
    if (!key)
        return NULL;
    while (i < 4)
    {
        key[i] = (int*)malloc(N * 4);
        if (!key[i])
        {
            while (i > 0)
                free(key[--i]);
            free(key);
            return NULL;
        }
        i++;
    }
    return key;
}

void free_key(int **key)
{
    int i = 0;
    while (i < 4)
    {
        free(key[i]);
        i++;
    }
    free(key);
}

int parse_input(char *str, int **key)
{
    int i, j, count = 0;

    while (*str && count < 16)
    {
        if (is_valid_digit(*str))
        {
            i = count / 4;
            j = count % 4;
            key[i][j] = *str - '0';
            count++;
        }
        else if (*str != ' ')
            return 0;
        str++;
    }
    return (count == 16);
}

int **key_maker(char *str)
{
    int **key = allocate_key();
    if (!key)
        return NULL;

    if (!parse_input(str, key))
    {
        write(2, "Error: Invalid input\n", 21);
        free_key(key);
        return NULL;
    }
    return key;
}