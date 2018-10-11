#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenate 2 strings to new allocated memory
 *@s1: string 1
 *@s2: string 2
 *@n : n bytes of string 2
 *Return: pointer that is generic with general purpose
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
	unsigned int combinesize;
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
			;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
			;
		if (size2 > n + 1)
			size2 = n + 1;
	}
	combinesize = size1 + size2;
	ptr = malloc(sizeof(char) * combinesize + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < size2; j++)
		ptr[i++] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
