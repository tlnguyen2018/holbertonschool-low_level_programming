#include "holberton.h"
/**
 *get_bit - entry point
 *@n: number
 *@index: index
 *Description: get the value at index
 *Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int j;

	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	i = n >> index;
	j = (i & 1);
	return (j);
}
