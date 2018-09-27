#include "holberton.h"

/**
 *_strcat - entry point
 *@dest: value of dest
 *@src: value of src
 *Description: combine 2 string
 *Return: the resutlting string dest
 */
char *_strcat(char *dest, char *src)

{
	int insrc = 0;
	int indest = 0;

	while (dest[indest] != '\0')
		indest++;
	while (src[insrc] != '\0')
	{
		dest[indest] = src[insrc];
		insrc++;
		indest++;
	}
	dest[indest] = '\0';
	return (0);
}
