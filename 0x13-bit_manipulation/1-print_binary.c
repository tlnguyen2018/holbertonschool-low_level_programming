#include "holberton.h"

/**
 * print_binary - prints a binary representation of a number
 * @n: number to print binary representation of
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int number, i, k;

	number = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (number != 0)
	{
		i++;
		number = number >> 1;
	}
	while (i)
	{
		number = n;
		for (k = 1; k < i; k++)
			number = number >> 1;
		if (number == (number | 1))
			_putchar('1');
		else
			_putchar ('0');
		i--;
	}
}
