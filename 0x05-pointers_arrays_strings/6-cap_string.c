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
		index++;
		if (index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] = s[index] - 32;
			continue;
		}
		if (s[index - 1] == 32 || s[index - 1] == 9 ||
		    s[index - 1] == 10 ||
		    s[index - 1] == 44 || s[index - 1] == 59 ||
		    s[index - 1] == 46 ||
		    s[index - 1] == 33 || s[index - 1] == 63 ||
		    s[index - 1] == 34 ||
		    s[index - 1] == 40 || s[index - 1] == 41 ||
		    s[index - 1] == 123 ||
		    s[index - 1] == 125)

		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] = s[index] - 32;
		}
	}
	return (s);
}
