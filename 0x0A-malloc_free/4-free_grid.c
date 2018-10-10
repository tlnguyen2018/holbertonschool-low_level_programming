#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - entry point
 * Description: free the 2d grid
 * @grid: the grid
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
