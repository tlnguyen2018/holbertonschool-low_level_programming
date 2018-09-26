#include "holberton.h"

/**
 *puts_half - entry point
 *@str: value of string
 *Description: print out half
 */

void puts_half(char *str)

{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		continue;
	}
	index += 1;

	for (index = index / 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
