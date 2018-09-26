#include "holberton.h"

/**
 *print_rev - entry point
 *@s: value of string
 *Description: print out reversed string
 */

void print_rev(char *s)

{
	int first = 0;
	int last = *(s - 1);
	char temp;

	while (first < last)
	{
		temp = *first;
		*first] = *last;
		*last = temp;

		--first;
		++last;
	}
	_putchar('\n');
}
