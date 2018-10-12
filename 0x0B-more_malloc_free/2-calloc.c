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
	char *ptr;
	unsigned a;
	unsigned i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;
	ptr = malloc(a);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		ptr[i] = 0;
	return ((void*)ptr);
}
