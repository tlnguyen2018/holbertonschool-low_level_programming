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
	int whole;
	int xneedle = 0;
	int stmat;

	for (whole = 0; *(haystack + whole) != '\0'; whole++)
	{
		if (*(haystack + whole) == *(needle + xneedle))
		{
			for (stmat = whole, xneedle = 0;
			     *(haystack + stmat) &&
			     *(needle + xneedle);
			     stmat++, xneedle++)
			{
				if ((*haystack + stmat) == *(needle + xneedle))
					return (haystack + stmat);
			}
		}
		if (*(needle + xneedle) == '\0')
			return (haystack + stmat);
	}
	return ('\0');
}
