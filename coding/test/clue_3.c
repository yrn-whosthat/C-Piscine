#define N 4

void	remove_n_from(int ***output, int row, int col, int value);
/*
if key is n, then in n-1 spaces in front of it we can not place N (4)

*/
 
void clue_3_helper(int ***grid, int **key, int row, int col)
{
    int val;
    int i;

    val = key[row][col] - 1;
    i = 0;
    while (i < val)
    {
        if (row < 2)
            remove_n_from(grid, i, col, N);
        else
            remove_n_from(grid, row, i, N);
        i++;
    }

}

void    clue_3(int ***grid, int **key)
{
    int i;
    int j;

    i = 0;
    while (i < N)
    {
        j = 0;
        while (j < N)
        {
            if(key[i][j] > 1)
                clue_3_helper(grid, key, i, j);
            j++;
        }
        i++;
    }
}