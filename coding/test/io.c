/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:48:26 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/21 15:48:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#define N 4

void    output_3d_array(int ***array);
char	*int_to_string(int num);

void    clear_line(int ***output, int fix, int var, int d, int is_row)
{
	int	i;

	i = 0;
	while (i < N)
	{	
		if ( i != var)
		{
			if (is_row)
				output[fix][i][d] = 0;
			else
				output[i][fix][d] = 0;
		}
		i++;
	}
}

void	write_to(int ***output, int row, int col, int value)
{
	int	depth;
	int	i;

	if (value < 1 || value > N)
	{
		write(2, "Error: Invalid value\n", 21);
		return;
	}
	depth = value - 1;
	i = 0;
	while (i < N)
	{
		if (i != depth)
			output[row][col][i] = 0;
		else
			output[row][col][i] = value;
		i++;
	}
	clear_line(output, row, col, depth, 1);
	clear_line(output, col, row, depth, 0);
	
}

void	remove_n_from(int ***output, int row, int col, int value)
{
	int	depth;
	int	i;

	if (value < 1 || value > N)
	{
		write(2, "Error: Invalid value\n", 21);
		return;
	}
	depth = value - 1;
	output[row][col][depth] = 0;	
}

int	*read_from(int ***output, int row, int col)
{	
	if (row < 0 || row >= N || col < 0 || col >= N)
	{
		write(2, "Error: Invalid row or column\n", 29);
		return (NULL);
	}
	int	*result;
	int i;

	result = malloc(N * 4);
	if (result == NULL)
	{
		write(2, "Error: Memory allocation failed\n", 32);
		return (NULL);
	}
	i = 0;
	while (i < N)
	{
		result[i] = output[row][col][i];
		i++;
	}
	return (result);
}
/*
int	main()
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
    int	i;

	write_to(test_array, 3,3,3);
	output_3d_array(test_array);
	
	int *column = read_from(test_array, 3, 3);
	if (column != NULL)
	{
		i = 0;
		while (i < N)
		{
			write(1, int_to_string(column[i]), 1);
			i++;
		}
		free(column);
	}
	return (0);
}
*/
