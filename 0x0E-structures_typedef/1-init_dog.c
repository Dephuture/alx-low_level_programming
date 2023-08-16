#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer
 * @name: takes a char name to initialize
 * @age: takes an int of age
 * @owner: takes and int of
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

