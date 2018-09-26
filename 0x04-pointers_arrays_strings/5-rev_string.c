#include "holberton.h"

/**
 *rev_string - entry point
 *@s: value of string
 *Description: reverse a string
 */

void rev_string(char *s)
{
	char begin;
	char end;
	int index;
	int rindex;

	index = 0;

	while (s[index] != '\0')
		index++;
	index--;

	for (rindex = 0; rindex < index; rindex++)
	{
		begin = s[rindex];
		end = s[index];
		s[index] = begin;
		s[rindex] = end;
		index--;
	}
}
