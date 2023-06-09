#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct
 * @d: pointer to struct
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";
		if (!d->owner)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
