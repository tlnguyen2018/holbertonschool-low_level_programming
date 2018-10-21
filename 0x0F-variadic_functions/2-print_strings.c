#include "variadic_functions.h"
/**
 *print_strings - entry point
 *@separator: seperator
 *@n: number
 *Description : print string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int j;
	char *word;

	va_start(string, n);
	for (j = 0; j < n; j++)
	{
		word = va_arg(string, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (separator != NULL && j != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
