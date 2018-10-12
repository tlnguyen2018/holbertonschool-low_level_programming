#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenate 2 strings to new allocated memory
 *@s1: string 1
 *@s2: string 2
 *@n : n bytes of string 2
 *Return: pointer that is generic with general purpose
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	size1 = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	size2 = _strlen(s2);
	if (_strlen(s2) <= n)
		n = size2;
	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (size1 = 0; s1[size1] != '\0'; size1++)
		ptr[size1] = s1[size1];
	for (size2 = 0; size2 < n; size2++, size1++)
		ptr[size1] = s2[size2];
	ptr[size1] = '\0';
	return (ptr);
}

/**
 *_strlen - string lenght
 *@ptr : pointer
 *Description : string lenght
 *Return: len
 *Description
 */

unsigned int _strlen(char *ptr)
{
	unsigned int i = 0;

	while (ptr[i] != '\0')
		i++;
	return (i);
}
