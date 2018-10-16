#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - Entry point
 *dog_t: structure dog
 *@d:value
 *Description : free the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
