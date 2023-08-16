#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that fress a memory
 * @d: takes a struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
