#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - pointer to entry point
 *@name: name
 *@age: age
 *@owner: owner
 *return : description
 *Description : create a new dog
 *dog_t - pointer new dog or NULL
 *
 *Return: Null if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *whiskey;
	char *name_copy;
	char *owner_copy;
	int i, k;

	whiskey = malloc(sizeof(dog_t));
	if (whiskey == NULL)
		return (NULL);
	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			;
		name_copy = malloc(sizeof(char) * (i + 1));
		if (name_copy == NULL)
		{
			free(whiskey);
			return (NULL);
		}
		for (k = 0; k <= i; k++)
			name_copy[k] = name[k];
		whiskey->name = name_copy;
	}
	if (owner != NULL)
	{
		for (i = 0; owner[i] != '\0'; i++)
			;
		owner_copy = malloc(sizeof(char) * (i + 1));
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(whiskey);
			return (NULL);
		}
		for (k = 0; k <= i; k++)
			owner_copy[k] = owner[k];
		whiskey->owner = owner_copy;
	}
	if (age >= 0)
		whiskey->age = age;
	return (whiskey);
}
