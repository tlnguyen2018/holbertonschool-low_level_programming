#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - check malloc if it has enough space
 *@b: value
 *Return: pointer that is generic with general purpose
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
