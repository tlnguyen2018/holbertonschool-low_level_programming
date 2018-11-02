#include "holberton.h"
/**
 * _atoi - entry point
 * @s : the string
 *Description : return the int value from the string
 * Return: int value of the string
 */
int _atoi(const char *s)
{
	int index = 0;
	int sign = 1;
	unsigned int number = 0;

	while (s[index] != '\0' && !(s[index] >= '0' && s[index] <= '9'))
	{
		if (s[index] == '-')
			sign = (sign * -1);
		index++;
	}
	for (; s[index] >= '0' && s[index] <= '9'; index++)
		number = (number * 10) + (s[index] - '0');
	return (number * sign);
}

/**
*_pow - entry point
*@x: base
*@n: the power
*Description: the power
*Return: number
*/
int _pow(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0; i < n; ++i)
	{
		number *= x;
	}
	return (number);
}

/**
 *binary_to_uint - entry point
 *Description: convert binary to decimal
 *@b: the binary string
 *Return: decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int j = 0;
	unsigned long int number;
	unsigned long int num = 0;
	unsigned int remainder;

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
	number = _atoi(b);
	while (number != 0)
	{
		remainder = number % 10;
		number = number / 10;
		num = num + (_pow(2, j) * remainder);
		++j;
	}
	return (num);
}
