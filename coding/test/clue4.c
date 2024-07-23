#include <unistd.h>
#define N 4
void    write_to(int ***output, int row, int col, int value);

void    clue_4_helper(int ***grid, int **key, int side)
{
    int i;
    int j;

    i = 0;
    while (i < N)
    {
        if (key[side][i] == 4)
            {
                j = 0;
                while (j < N)
                {
                    switch (side)
                    {
                        case 0:
                            write_to(grid, j, i, j + 1);
                            break;
                        case 1:
                            write_to(grid, N - 1 - j, i, j + 1 );
                            break;
                        case 2:
                            write_to(grid, i, j, j + 1);
                            break;
                        case 3:
                            write_to(grid, i, N - 1 - j, j + 1);
                    }
                    j++;
                }
            }
            i++;
    }

}

void    clue_4(int ***grid, int **key)
{
    int side;
    
    side = 0;
    while (side < N)
    {
        clue_4_helper(grid, key, side);
        side++;
    }
}

void    logic_4(int ***grid, int **key)
{
    clue_4(grid, key);
}