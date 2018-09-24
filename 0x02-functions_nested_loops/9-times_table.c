#include "holberton.h"

/**
 *times_table - Entry point
 */
void times_table(void)

{
	int ver;
	int hor;
	int mul;

	for (ver = 0 ; ver <= 9 ; ver++)
	{
		for (hor = 0 ; hor <= 9 ; hor++)
		{
			mul = (ver * hor);
			if (mul >= 10)
			{	_putchar((mul / 10) + '0');
			}
			else if (ver == 0)
				;
			else
				_putchar(' ');
			_putchar((mul % 10) + '0');
		}
		if (ver != 9)
		{
			_putchar(',');
			_putchar(' ');

		}

	}
	_putchar('\n');
}
