#include <stdio.h>

/**
 *main - entry
 *Description: fizzbuzz
 *Return: always 0
 */
int main(void)
{
	int n;

	{
		for (n = 1 ; n <= 100 ; n++)
		{

			if (n % 15 == 0)
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else if (n % 5 == 0)
				printf("Buzz");
			else if (n % 3 != 0 && n % 5 != 0)
				printf("%d", n);
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
