#include "holberton.h"

/**
 *_strspn - entry point
 *@s: string
 *@accept: string
 *Description: find the length of prefix
 *Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int xfs = 0;
	unsigned int yfaccept = 0;
	unsigned int pflen = 0;

	for (xfs = 0; *(s + xfs) != '\0'; xfs++)
	{
		for (yfaccept = 0; *(accept + yfaccept) != '\0'; yfaccept++)
		{
			if (*(s + xfs) == *(accept + yfaccept))
			{
				pflen++;
				break;
			}
		}
		if (pflen != 0 && *(yfaccept + accept) == '\0')
			return (pflen);
	}
	return (0);
}
