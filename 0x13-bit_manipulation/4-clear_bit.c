#include "holberton.h"

/**
 * clear_bit - set given index value to 0
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (n == NULL)
		return (-1);
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	set = set << index;
	set = ~set;
	*n = *n & set;
	return (1);
}
