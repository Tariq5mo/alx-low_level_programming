#include "dog.h"

/**
 * init_dog - initialize struct
 *
 * @d:the name of the struct
 * @name: the name of dog
 * @age:age ot it
 * @owner:owner of it
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
