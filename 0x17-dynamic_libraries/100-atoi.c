#include "holberton.h"

/**
 * _atoi - entry point
 * @s : the string
 *Description : return the int value from the string
 * Return: int value of the string
 */
int _atoi(char *s)
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
