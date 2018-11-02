#include "holberton.h"
/**
 *binary_to_uint - entry point
 *Description: convert binary to decimal
 *@b: the binary string
 *Return: decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int mul = 1;
	unsigned long int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
			;
		else
		{
			return (0);
		}
	}
	for (i -= 1; i >= 0; i--)
	{
		sum += ((b[i] - '0') * mul);
		mul = (mul * 2);
	}
	return (sum);
}
