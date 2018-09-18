#include "holberton.h"

/**
 *_isalpha - Entry point
 *@c : character to print
 *Return: 1 on success
 *On error: 0
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
