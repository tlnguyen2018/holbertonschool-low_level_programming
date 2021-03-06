#include <stdio.h>
#include "holberton.h"

/**
 * *_memcpy - entry point
 *@dest: destination string
 *@src: source string
 *@n: the n bytes of the memory
 *Description: copy n bytes from src to dest
 *Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
