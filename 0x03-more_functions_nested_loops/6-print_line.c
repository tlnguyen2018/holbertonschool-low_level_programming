#include "holberton.h"

/**
 *print_line - print line
 *Description: print line based on n
 *@n: number
 */
void print_line(int n)
{
	char ch = '_';
	char end = '\n';

	while (n > 0)
	{
		_putchar(ch);
		n--;
	}
	_putchar(end);
}
