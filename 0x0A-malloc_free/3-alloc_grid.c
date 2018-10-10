#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * **alloc_grid - entry point
 * Description: print the pointer for the 2 dimentional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int row, column;


	if (width <= 0 || height <= 0)
		return ('\0');
	arr = malloc(sizeof(*arr) * width);
	if (arr == 0)
		return ('\0');
	for (row = 0; row < width; row++)
	{
		arr[row] = malloc(sizeof(int) * height);
		if (arr[row] == 0)
		{
			for (column = 0; column < row; column++)
			{
				free(arr[column]);
			}
			free(arr);
			return ('\0');
		}
		for (column = 0; column < height; column++)
		{
			arr[row][column] = 0;
		}
	}
	return (arr);
}
