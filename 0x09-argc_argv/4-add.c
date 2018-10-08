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
	int i;
	int j;

	if (agrc == 1)
		printf("0\n");
	for (i = 1; i < agrc; i++)
	{
		for (j = 0; agrv[i][j] != '\0'; j++)
		{
			if (agrv[i][j] < 48 || agrv[i][j] > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(agrv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
