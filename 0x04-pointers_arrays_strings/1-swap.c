#include "holberton.h"

/**
 *swap_int - entry point
 *@a: value of a
 *@b: value of b
 *Description: swap the 2 number
 */
void swap_int(int *a, int *b)

{
	int t = *a;
	*a = *b;
	*b = t;
}
