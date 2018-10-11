#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * argstostr - entry point
 * @ac: argument count
 * @av: argument
 * Return value - NULL or pointer
 * Description : concatenate
 *
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int word, letter, len;
	char *s;
	int i = 0;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			;
		}
		len = letter + 1;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			s[i] = av[word][letter];
			i++;
		}
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return (s);
}
