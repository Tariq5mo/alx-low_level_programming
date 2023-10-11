#include "dog.h"

/**
 * free_dog - free dog
 *
 * @d: the free
 * Return:void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	}
}
