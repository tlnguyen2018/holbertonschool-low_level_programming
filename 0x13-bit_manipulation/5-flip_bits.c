#include "holberton.h"
/**
 * clear_bit - set given index value to 0
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		m = m >> 1;
		n = n >> 1;
	}
	return (i);
}
