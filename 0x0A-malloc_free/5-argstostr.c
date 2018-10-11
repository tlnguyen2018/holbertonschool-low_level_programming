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
	int word, letter;
	int len = 0;
	char *ptr;
	int i = 0;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			len++;
		}
		len++;
	}
	len++;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			ptr[i] = av[word][letter];
			i++;
		}
		ptr[i] = '\n';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
