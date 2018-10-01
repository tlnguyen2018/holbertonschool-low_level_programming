#include <stdio.h>
#include "holberton.h"

/**
 * *_memset - entry point
 *@s: string
 *@b: constant value
 *@n: the first n bytes of the memory
 *Description: fill the first n bytes with constant value
 *Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
