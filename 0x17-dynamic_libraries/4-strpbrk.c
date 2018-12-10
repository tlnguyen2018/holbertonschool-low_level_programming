#include "holberton.h"

/**
 *_strpbrk - matching character
 *Description: finding matching character in 2 string
 *@s : string 1
 *@accept: string 2
 *Decription : matching
 *Return: value or Null
 */

char *_strpbrk(char *s, char *accept)
{
	int xfs;
	int yfaccept;

	for (xfs = 0; *(s + xfs) != '\0'; xfs++)
	{
		for (yfaccept = 0; *(accept + yfaccept) != '\0'; yfaccept++)
		{
			if (*(s + xfs) == *(accept + yfaccept))
				return (s + xfs);
		}
	}
	return ('\0');
}
