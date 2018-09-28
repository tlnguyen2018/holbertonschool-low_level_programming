#include "holberton.h"

/**
 *reverse_array - entry point
 *@a: string a
 *@n: value n
 *Description: reverse the array
 */
void reverse_array(int *a, int n)

{
	int index;
	int temp;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = temp;
	}
}
