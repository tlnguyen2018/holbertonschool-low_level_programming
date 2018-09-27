#include "holberton.h"

/**
 *_strncpy - entry point
 *@dest: value of dest
 *@src: value of src
 *@n: value of n
 *Description: copy
 *Return: value
 */
char *_strncpy(char *dest, char *src, int n)

{
	int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
