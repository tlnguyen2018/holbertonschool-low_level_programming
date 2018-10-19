#include "variadic_functions.h"
/**
 *print_numbers - entry point
 *@separator: seperator
 *@n: number
 *Description : print number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(valist, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && j != n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	putchar('\n');
}
