
#include <unistd.h>

#define N 4

char	*int_to_string(int num)
{
	static char	str[12]; // Enough space for an integer with '\0';
	char	*ptr = str + 11; // Start from the end
	int	is_negative = 0;

	*ptr = '\0'; // Null-terminate the string

	if (num == 0)
	{
		*--ptr = '0';
		return (ptr);
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
		*--ptr = (num % 10) + '0'; // We will receive a number between 0-9 and we add it to '0' to receive a number in ASCII
		num /= 10;
	}
	if (is_negative)
	{
		*--ptr = '-';
	}
	return (ptr);
}

// String must be properly null-terminated for this to work
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void output_3d_array(int ***array) {
    int i = 0, j = 0, k = 0;
    write(1, "Output 3d array:\n", 17);
    while (i < N) {
        while (j < N) {
            while (k < N) {
                char *temp;
                temp = int_to_string(array[i][j][k]);
                write(1, temp, ft_strlen(temp));
                k++;
            }
            write(1, " ", 1);
            k = 0; // Reset k for the next row
            j++;
        }
        write(1, "\n", 1);
        j = 0; // Reset j for the next slice
        i++;
    }
}

void output_2d_array(int **array) {
    int i = 0, j = 0;
    write(1, "Output 2d array:\n", 17);
    while (i < N) {
        while (j < N) {
            char *temp;
            temp = int_to_string(array[i][j]);
            write(1, temp, ft_strlen(temp));
            write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        j = 0; // Reset j for the next row
        i++;
    }
}
/*
int main()
{
    int test_array[4][4][4] = {
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},
        
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},
        
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},

		{{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}}
    };

    output_3d_array(test_array);

    return 0;
}
*/
