#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point
 *Description: print out numbers of argument
 *@agrc: number of arguments
 *@agrv: array of strings
 *Return: always 0
 */
int main(int agrc, char *agrv[])
{
	(void) agrv;

	printf("%d\n", agrc - 1);
	return (0);
}
