#include "holberton.h"

/**
 *print_rev - entry point
 *@s: value of string
 *Description: print out reversed string
 */

void print_rev(char *s)

{
	int index;

	while (s[index] != '\0')
	{
		index++;
	}
	for (index = index - 1; index >= 0; index--)
		_putchar(s[index]);
_putchar('\n');
}
