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

	int hor;
	int ver;

	for (ver = 0 ; ver < n ; ver++)
	{
		for (hor = 0 ; hor < n ; hor++)
		{
			if (hor == ver)
				_putchar(ch);
			if (hor < ver)
				_putchar(space);
		}
		_putchar(end);
	}

}
