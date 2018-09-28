#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: input string
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - 32;
		index++;
	}
	return (s);
}
