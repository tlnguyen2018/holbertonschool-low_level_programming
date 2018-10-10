#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Entry point
 *@size : size of the array
 *@c: char initialize to
 *Return: pointer of the array
 */
char *create_array(unsigned int size, char c)

{
	unsigned int index;
	char *arr;

	if (size == 0)
		return ('\0');
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return ('\0');
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	return (arr);
}
