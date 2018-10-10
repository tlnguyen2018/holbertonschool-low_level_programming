#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Entry point
 *@s1 : string 1
 *@s2 : string 2
 *Return: pointer contain the string 1 and 2
 */
char *str_concat(char *s1, char *s2)

{
	int index1;
	int index2;
	int size1, size2;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}
	size2++;
	s = malloc(size1 * sizeof(*s1) + size2 * sizeof(*s2));
	if (s == 0)
	{
		return (NULL);
	}
	for (index1 = 0, index2 = 0; index1 < size1 + size2; index1++)
	{
		if (index1 < size1)
			s[index1] = s1[index1];
		else
			s[index1] = s2[index2++];
	}
	return (s);
}
