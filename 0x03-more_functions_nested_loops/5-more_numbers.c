#include "holberton.h"

/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int A;
	int a;

	for (A = 0 ; A <= 10 ; A++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar ('\n');

	}
}
