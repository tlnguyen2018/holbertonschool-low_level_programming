#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str : string
 *Return: pointer contain the copy of str
 */
char *_strdup(char *str)

{
	unsigned int index;
	unsigned int size;
	char *s;

	if (str == 0)
		return ('\0');
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	s = malloc(size * sizeof(*s));
	if (size == 0)
	{
		return ('\0');
	}
	for (index = 0; index < size; index++)
		s[index] = str[index];
	return (s);
}
