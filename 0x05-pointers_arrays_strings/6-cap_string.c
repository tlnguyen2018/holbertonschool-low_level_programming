#include "holberton.h"
/**
 * cap_string - changes all first word to uppercase
 * @s: input string
 * Return: changed string
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] = s[index] - 32;
			continue;
		}
		if (s[index] == 32 || s[index] == 9 || s[index] == 10 ||
		    s[index] == 44 || s[index] == 59 || s[index] == 46 ||
		    s[index] == 33 || s[index] == 63 || s[index] == 34 ||
		    s[index] == 40 || s[index] == 41 || s[index] == 123 ||
		    s[index] == 125)

		{
			index++;
			if (s[index] >= 'a' && s[index] <= 'z')
			{	s[index] = s[index] - 32;
				continue;
			}
		}
	}
	return (s);
}
