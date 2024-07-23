#include <unistd.h>
#define N 4

void	output_2d_array(int **array);
int	**key_maker(char *str); // Madi function
int	***init(int n); // Arsen function 
int	validator(int ***grid);
void	init_logic(int ***grid, int **key);
void	clue_4(int ***grid, int **key);
void	clue_3(int ***grid, int **key);
void	logic(int ***grid, int **key);
void	output_3d_array(int ***array);

int ***solver(char *str)
{
	int **key;
	int ***grid;

	key = key_maker(str);
    grid = init(N);

	init_logic(grid, key);
	clue_4(grid, key);
	clue_3(grid, key);
	/*
	is_changed = 1;
	while (validator(grid) && is_changed)
	{
		logic(grid, key, is_changed);
	}

	if (!validator(grid))
	{
		return grid;
	}

	write(1, "Error: could not find the solution\n", 35);
	return NULL;
	*/

	output_3d_array(grid);
    output_2d_array(key);
	return (grid);
}

int main(int argn, char **args) {
    if (argn != 2) {
        write(2, "Error: incorrect amount of arguments.\n", 38);
        return 1;
    }
    int ***result = solver(args[1]);
    // Adding debug statements to verify correct allocations and outputs
    if (!result){
        write(2, "Error: result is NULL.\n", 23);
	}
    return 0;
}