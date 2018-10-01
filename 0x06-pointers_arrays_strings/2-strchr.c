#include "holberton.h"

/**
 * *_strchr - entry point
 *@s: string
 *@c: character c
 *Description: find character c in string s
 *Return: value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
