#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: no return 
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
}
