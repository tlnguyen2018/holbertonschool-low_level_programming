#include "holberton.h"
#include <stdio.h>

int helper(int a, int b);

/**
 * is_prime_number - find prime number
 * @n: integer
 *Description: find prime number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (helper(n, 2));
}


/**
 *helper - helper function
 *@a: value
 *@b: value
 *Description: find prime number
 *Return: value
 */

int helper(int a, int b)
{
	
	if (a == b)
	{
		return (1);
	}
	if (a == 1 || a < 0)
	{
		return (0);
	}
	if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (helper(a, (b + 1)));
	}
}
