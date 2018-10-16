#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - Entry point
 *struct dog - structure dog
 *@d:value
 *Description : function that print struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);
	{
		if (d->age < 0)
			printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", d->owner);
	{
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
