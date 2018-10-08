#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - entry point
 *Description: print out the mul of argument
 *@agrc: number of arguments
 *@agrv: array of strings
 *Return: always 0
 */
int main(int agrc, char *agrv[])
{
	int sum = 0;
	int i = 1;
	
	(void) agrc;
	for (i = 1; agrv[i] != '\0'; i++)
	{
		if (!isdigit(agrv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
			sum = sum + atoi(agrv[i]);
	}
	return (0);
}
