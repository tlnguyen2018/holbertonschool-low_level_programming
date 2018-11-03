#include "holberton.h"
/**
 * flip_bits - flip bit to get the same number
 * @n: number
 * @m: number
 * Return: number different bit
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
