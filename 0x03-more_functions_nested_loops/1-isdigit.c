#include "holberton.h"

/**
 *_isdigit - Entry point
 *@c : character to print
 *Return: 1 on success
 *On error: 0
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
