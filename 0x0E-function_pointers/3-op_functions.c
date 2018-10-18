#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - returns sum
 *@a: first
 *@b: second
 *Return: sum value of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns substract
 *@a: first
 *@b: second
 *Return: substruct of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns multiplication
 *@a: first
 *@b: second
 *Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 *op_div - returns division
 *@a: first
 *@b: second
 *Return: division of a over b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 *op_mod - returns module
 *@a: first
 *@b: second
 *Return: product
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
