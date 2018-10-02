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
	int i = 0;
	int j;
	int k;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; haystack[j] != '\0' &&
			    needle[k] != '\0'; j++, k++)
			{
				if (needle[k] != haystack[j])
					break;
			}
			if (needle[k] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
