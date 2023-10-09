#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - struct dog is initialised
 * @d: points to the dog struct to be initialised
 * @name: initialised name
 * @age: initialised name
 * @owner: initialised owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

