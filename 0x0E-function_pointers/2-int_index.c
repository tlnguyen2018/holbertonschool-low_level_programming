#include "function_pointers.h"
/**
 *int_index - entry point
 *@array: array
 *@size: size
 *@cmp: pointer function
 *Description: function that searches for an integer
 *Return: 1, -1, or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*(array + i)))
			return (i);
	}
	return (-1);
}
