#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers starting with 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double i = 1, j = 2, a;
	int z;

	printf("%.0f, %.0f, ", i, j);
	for (z = 0; z < 48; z++)
	{
		a = j;
		j += i;
		i = a;
		printf("%.0f", j);
		if (z != 47)
			printf(", ");
		else
			putchar('\n');
	}
	return (0);
}
