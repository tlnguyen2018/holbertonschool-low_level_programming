#include "holberton.h"

/**
 *_puts - entry point
 *@str: value of string
 *Description: print out string
 */

void _puts(char *str)

{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
