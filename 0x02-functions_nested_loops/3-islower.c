#include "holberton.h"

/**
 *_islower - Entry point
 *@c : character to print
 *Return: 1 on success
 *On error: 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
