#include <unistd.h>
#define N 4
void    write_to(int ***output, int row, int col, int value);

void	clue_1_helper(int ***grid, int **key, int side)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if(key[side][i] == 1)
		{
			switch (side)
            {
                case 0: // Top
                    write_to(grid, 0, i, N);
                    break;
                case 1: // Bottom
                    write_to(grid, N-1, i, N);
                    break;
                case 2: // Left
                    write_to(grid, i, 0, N);
                    break;
                case 3: // Right
                    write_to(grid, i, N-1, N);
            }
		}
		i++;
	}
}
void	clue_1(int ***grid, int **key)
{
	int side;

	side = 0;
	while (side < N)
	{
		clue_1_helper(grid, key, side);
		side++;
	}
	
}

void	init_logic(int ***grid, int **key)
{
    clue_1(grid, key);
}