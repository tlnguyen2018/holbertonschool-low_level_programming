#include "holberton.h"

/**
 *_puts_recursion - entry point
 *@s: value of character
 *Description: print out the string
 */
void _puts_recursion(char *s)

{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s = s + 1);
	}
}
