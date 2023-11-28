#include "dog.h"

/**
 * free_dog - free a block of structure (a dog)
 *
 * @d: the Structre
 * Return:void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
