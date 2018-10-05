#include "holberton.h"
/**
 *print_positive_only - entry point
 *Description: print only positive integer
 *@n : number
 */
void print_positive_only(unsigned int n)
{

	if ((n > 0) && (n / 10 != 0))
	{
		print_positive_only(n / 10);
	}
	_putchar ((n % 10) + '0');
}

#include "holberton.h"
/**
 * print_number - print out integer
 * @n: number
 * Desription: print negative number
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = (n * -1);
		_putchar('-');
		print_positive_only(x);
	}
	else
		print_positive_only(n);
}
