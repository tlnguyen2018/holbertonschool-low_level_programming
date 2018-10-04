#include "holberton.h"
#include <stdio.h>

int helper(int isquare, int root);

/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}


/**
 *helper - helper function
 *@isquare: value
 *@root: value
 *Description: return the square root value
 *Return: value
 */

int helper(int isquare, int root)
{
	int square = root * root

	if (square > isquare)
	{
		return (-1);
	}
	if (square == isquare)
	{
		return (root);
	}
	else
	{
		return (helper(isquare, root + 1));
	}
}
