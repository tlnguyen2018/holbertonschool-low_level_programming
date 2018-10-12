#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - locate the memory of the array
 *@nmemb: number of element
 *@size : size per element
 *Return: NULL or 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return ('\0');
	return (ptr);
}
