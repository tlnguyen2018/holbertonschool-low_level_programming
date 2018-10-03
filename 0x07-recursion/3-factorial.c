#include "holberton.h"

/**
 *factorial - entry point
 *@n: value
 *Description: factorial value
 *Return: 0 or -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));

	}
}
