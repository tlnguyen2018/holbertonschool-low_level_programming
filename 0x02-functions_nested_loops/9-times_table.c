#include "holberton.h"

/**
 *times_table - Entry point
 */
void times_table(void)

{
	int x;
	int y;
	int a;

	for (x = 0 ; x <= 9 ; x++)
	{
		for(y = 0 ; y <= 9 ; y++)
		{
			a = (x * y);
			if( a >= 10)
			{	_putchar((a / 10) + '0');
				_putchar((a % 10)
			else if( y == 0)
				;
			else
				_putchar(' ')
					
	_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('/n');

		}
	}
}
