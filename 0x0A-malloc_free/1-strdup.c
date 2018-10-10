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
	int index;
	int size;
	char *s;

	if (str == 0)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	size++;
	s = malloc(size * sizeof(*s));
	if (s == 0)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
		s[index] = str[index];
	return (s);
}
