#include "holberton.h"

/**
 *_print_rev_recursion - entry point
 *@s: value of character
 *Description: print out the string reverse
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
