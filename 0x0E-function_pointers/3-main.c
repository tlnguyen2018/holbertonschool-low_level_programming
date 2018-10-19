#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@agrc: argument count
 *@agrv: argument
 *Description : main function
 *Return: value
 */
int main(int agrc, char *agrv[])
{
	int num1;
	int num2;
	int result;

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (agrv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((get_op_func(agrv[2])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(agrv[1]);
	num2 = atoi(agrv[3]);
	if (((*agrv[2]) == '/' || (*agrv[2]) == '%') && num2 == 0)
		exit(100);
	result = get_op_func(agrv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
