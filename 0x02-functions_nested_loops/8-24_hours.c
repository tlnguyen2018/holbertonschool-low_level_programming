#include "holberton.h"

/**
 *jack_bauer - Entry point
 */
void jack_bauer(void)

{
	int hour;
	int mi;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (mi = 0 ; mi < 60 ; mi++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
		}
	}
}
