#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name tp initialiaze
 * @age: age to initialiaze
 * @owner: owner to initialiaze
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
