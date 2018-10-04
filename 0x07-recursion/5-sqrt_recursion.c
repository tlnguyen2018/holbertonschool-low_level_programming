#include "holberton.h"
#include <stdio.h>

/**
 * helper - entry point help function for sqroot function
 * @isquare:  close to square
 * @root:  integer
 * Return: sqaure and root
 */
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


int helper(int isquare, int root)
{
	int square = root * root;

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
