#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct str - Struct character type and function
 *@str: character type function
 *@i: character
 *@fpt: The function associated
 */
typedef struct str
{
	char i;
	void (*fpt)(va_list fullist);
} str_print;

#endif
