#include "holberton.h"
#include <stdio.h>

/**
 *print_array - entry point
 *@n: number of element
 *@a: string value
 *Description: print out 02468
 */

void print_array(int *a, int n)

{
	int index;

	for (index = 0; index < n ; index++)
	{
		if (index < n - 1)
		{
			printf("%d", a[index]);
			putchar(',');
			putchar(' ');
		}
		else if (index == n - 1)
		{
			printf("%d", a[index]);
		}
	}
	putchar('\n');
}
