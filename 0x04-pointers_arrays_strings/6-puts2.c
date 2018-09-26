#include "holberton.h"

/**
 *puts2 - entry point
 *@str: value of string
 *Description: print out 02468
 */

void puts2(char *str)

{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
