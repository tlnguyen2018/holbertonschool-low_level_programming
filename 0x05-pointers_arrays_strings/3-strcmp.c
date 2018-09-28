#include "holberton.h"

/**
 *_strcmp - entry point
 *@s1: string 1
 *@s2: string 2
 *Description: compare 2 strings
 *Return: 0, -1, 1
 */
int _strcmp(char *s1, char *s2)

{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}
