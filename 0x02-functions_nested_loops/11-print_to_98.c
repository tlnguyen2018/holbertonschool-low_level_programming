#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print to 98
 *Description: print line based on n
 *@n: number
 *Return: no return
 */
void print_to_98(int n)

{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			n++;
		}
		else
		{
			printf("%d", n);
			n--;
		}
		printf (",");
		printf (" ");
	}
	if (n == 98 || n == 97 || n == 99)
		printf("98");
	putchar ('\n');
}
