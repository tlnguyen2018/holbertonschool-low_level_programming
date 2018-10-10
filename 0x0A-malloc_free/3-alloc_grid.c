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
	arr = malloc(sizeof(*arr) * height);
	if (arr == 0)
		return ('\0');
	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(sizeof(int) * width);
		if (arr[row] == 0)
		{
			for (column = 0; column < row; column++)
			{
				free(arr[column]);
			}
			free(arr);
			return ('\0');
		}
		for (column = 0; column < width; column++)
		{
			arr[row][column] = 0;
		}
	}
	return (arr);
}
