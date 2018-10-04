#include "holberton.h"

int find_lenght(char *s);
int define_string(char *first, char *last);

/**
 * find_lenght - find string's length
 * Description : find length
 * @s : the string
 * Return: value
 */

int find_lenght(char *s)
{
		if (*s == '\0')
		{
			return (0);
		}
		else
		{
			return (1 + find_lenght(s + 1));
		}
}

/**
 * define_string - check the string
 * Description: compare first and last
 * @first: character
 * @last: character
 * Return: value
 */
int define_string(char *first, char *last)
{
	if (*first != *last)
	{
		return (0);
	}
	else if (first >= last)
	{
		return (1);
	}
	else
	{
		return (define_string(first + 1, last - 1));
	}
}

/**
 * is_palindrome - see if the string is a palindrome
 * Description : find palidrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = find_lenght(s);
	char *first = s;
	char *last = s + (len - 1);

	if (len == 0)
	{
		return (1);
	}
	else
		return (define_string(first, last));
}
