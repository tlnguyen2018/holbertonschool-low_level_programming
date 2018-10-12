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
		if (size2 > n)
			size2 = n;
	}
	combinesize = size1 + size2;
	ptr = malloc(sizeof(char) * combinesize + 1);
	if (ptr == NULL)
		return (NULL);
	for (size1 = 0; s1[size1] != '\0'; size1++)
		ptr[size1] = s1[size1];
	for (size2 = 0; size2 < n; size2++, size1++)
		ptr[size1] = s2[size2];
	ptr[size1] = '\0';
	return (ptr);
}
