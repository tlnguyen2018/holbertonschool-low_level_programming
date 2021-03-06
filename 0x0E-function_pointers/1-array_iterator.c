#include "function_pointers.h"
/**
 *array_iterator - entry point
 *@array: array
 *@size: size
 *@action: pointer function
 *Description : print the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
