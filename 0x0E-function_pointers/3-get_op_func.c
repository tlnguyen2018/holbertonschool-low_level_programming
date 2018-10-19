#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - entry point
 *@s: operator
 *Description: perform the task
 *Return: entry
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL && s[1] != '\0')
		return (NULL);
	while (i < 5 && *s != *(ops[i].op))
		i++;
	return (ops[i].f);
}
