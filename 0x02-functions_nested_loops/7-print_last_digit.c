#include "holberton.h"

/**
 *print_last_digit - Entry point
 *@c : character to print
 *Return: no return
 */
int print_last_digit(int c)

{
	int i;

	i = c % 10;
	if (i < 0)
		i = i * -1;
	_putchar('0' + i);
	return (i);
}
