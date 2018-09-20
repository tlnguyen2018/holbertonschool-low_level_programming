#include "holberton.h"

/**
 *print_diagonal - print diagonal
 *Description: print diagonal based on n
 *@n: number
 */
void print_diagonal(int n)
{
	char ch = '\\';
	char space = ' ';
	char end = '\n';

	while (n > 0)
	{
		_putchar(space);
		n--;
	}
	_putchar(ch);
	_putchar(end);
}
