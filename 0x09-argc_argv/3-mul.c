#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Description: print out the mul of argument
 *@agrc: number of arguments
 *@agrv: array of strings
 *Return: always 0
 */
int main(int agrc, char *agrv[])
{
	int index1, index2, mul;

	if (agrc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (agrc == 3)
	{
		index1 = atoi(agrv[1]);
		index2 = atoi(agrv[2]);
		mul = index1 * index2;
		printf("%d\n", mul);
	}
	return (0);
}
