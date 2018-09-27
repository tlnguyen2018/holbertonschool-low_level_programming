#include "holberton.h"

/**
 *_strcat - entry point
 *@dest: value of dest
 *@src: value of src
 *Description: combine 2 strings
 *Return: value
 */
char *_strcat(char *dest, char *src)

{
	int indest = 0;
	int insrc = 0;

	while (dest[indest] != '\0')
		indest++;
	while (src[insrc] != '\0')
	{
		dest[indest] = src[insrc];
		insrc++;
		indest++;
	}
	return (dest);
}
