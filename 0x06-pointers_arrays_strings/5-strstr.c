#include "holberton.h"

/**
 *_strstr - entry point
 *Description: finding matching string within string
 *@haystack : original string
 *@needle: substring
 *Return: value or Null
 */

char *_strstr(char *haystack, char *needle)
{
	int whl;
	int xnedle = 0;

	for (whl = 0; *(haystack + whl) != '\0'; whl++)
	{
		if (*(haystack + whl) == *(needle + xnedle))
		{
			for (xnedle = 0; *(needle + xnedle) != '\0'; xnedle++)
				return (haystack + whl);
		}
	}
	return ('\0');
}
