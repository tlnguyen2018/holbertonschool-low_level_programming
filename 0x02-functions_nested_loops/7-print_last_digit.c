#include "holberton.h"

/**
 *print_last_digit - Entry point
 *@c : character to print
 *Return: no return
 */
int print_last_digit(int c)

{
	_putchar ('0' + c % 10);
	return (c % 10);
}
