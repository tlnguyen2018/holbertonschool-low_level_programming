#include "holberton.h"

/**
 *_isupper - Entry point
 *@c : character to print
 *Return: 1 on success
 *On error: 0
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
