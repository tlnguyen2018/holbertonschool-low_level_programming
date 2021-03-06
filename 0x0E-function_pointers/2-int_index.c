#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - entry point
 *@array: array
 *@size: size
 *@cmp: pointer function
 *Description: function that searches for an integer
 *Return: -1 or value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
				return (i);
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
