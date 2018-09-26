#include "holberton.h"

/**
 * _strcpy - entry point
 * @dest: pointer dest
 * @src: pointer src
 * Return: return 0 always true
 */
char *_strcpy(char *dest, char *src)
{
	int index1, index2;

	for (index1 = 0; src[index1] != '\0'; index1++)
	{
		;
	}
	for (index2 = 0; index2 < index1; index2++)
	{
		dest[index2] = src[index2];
	}
	return (dest);
}
