#include "holberton.h"

/**
 *_strncat - entry point
 *@dest: value of dest
 *@src: value of src
 *@n: value of byte
 *Description: combine 2 strings
 *Return: value
 */
char *_strncat(char *dest, char *src, int n)

{
	int indest = 0;
	int insrc = 0;

	while (dest[indest] != '\0')
		indest++;
	for (insrc = 0; insrc < n && src[insrc] != '\0'; insrc++)
	{
		dest[indest] = src[insrc];
		indest++;
	}
	return (dest);
}
