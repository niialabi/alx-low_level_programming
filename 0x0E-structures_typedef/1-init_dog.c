#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - funtion that inits dog struct
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: function inits details to ds
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		;
	else
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
