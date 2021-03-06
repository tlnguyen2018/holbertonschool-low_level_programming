#include "holberton.h"

/**
 *_pow_recursion - entry point
 *@x: value
 *@y: value
 *Description: value of x raised to the power of y
 *Return: 0 or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, (y - 1))));
	}
}
