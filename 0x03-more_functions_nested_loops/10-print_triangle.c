#include "holberton.h"

/**
 *print_triangle - print triangle
 *Description: print triangle based on size
 *@size: number
 */
void print_triangle(int size)
{
	int hor;
	int ver;

	if (size > 0)
	{
		for (ver = 1 ; ver <= size ; ver++)
		{
			for (hor = 1 ; hor <= size ; hor++)
			{
				if (hor <= (size - ver))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}

}
