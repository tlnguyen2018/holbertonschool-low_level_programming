#include "holberton.h"
/**
 * rot13 - converse letter to number
 * @alpha: input string
 * Return: changed string
 */
char *rot13(char *alpha)
{

	int index1;
	int index2;
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *new = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index1 = 0; alpha[index1] != '\0'; index1++)
	{
		for (index2 = 0; original[index2] != '\0'; index2++)
		{
			if (alpha[index1] == original[index2])
			{
				alpha[index1] = new[index2];
				break;
			}
		}
	}
	return (alpha);
}
