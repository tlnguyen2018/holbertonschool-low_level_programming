#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point
 *Description: print out the program's name
 *@agrc: number of arguments
 *@agrv: array of strings
 *Return: always 0
 */
int main(int agrc, char *agrv[])
{
	int index = 0;

	for (index = 0; index < agrc; index++)
	{
		printf("%s\n", agrv[index]);
	}
	return (0);
}
