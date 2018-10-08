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
	int i = 0;

	for (i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
