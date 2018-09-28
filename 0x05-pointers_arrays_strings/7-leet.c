#include "holberton.h"
/**
 * leet - converse letter to number
 * @alpha: input string
 * Return: changed string
 */
char *leet(char *alpha)
{

	int index1;
	int index2;
	char *original = "aeotlAEOTL";
	char *new = "4307143071";

	for (index1 = 0; alpha[index1] != '\0'; index1++)
	{
		for (index2 = 0; original[index2] != '\0'; index2++)
		{
			if (alpha[index1] == original[index2])
			{
				alpha[index1] = new[index1];
			}
		}
	}
	return (alpha);
}
