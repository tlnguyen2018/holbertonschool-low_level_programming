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
	{
		d = malloc(sizeof(struct dog));
		return;
	}
	printf("Name: ");
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);
	}
	printf("Age: ");
	{
		if (d->age < 0)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);
	}
	printf("Owner: ");
	{
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
