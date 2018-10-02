#include "holberton.h"
/**
 * print_number - print out integer
 * @n: number
 */
void print_number(int n)
{

	unsigned int num;

	if (n < 10 && n >= 0)
	{
		_putchar ('0' + n);
		return;
	}
	if (n < 0)
	{
		num = -1 * n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num >= 10)
	{
		print_number(n / 10);
	}
	_putchar((num % 10) + '0');
}
