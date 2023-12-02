#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: Point to a struct
 * @name: the name of the dog
 * @age: Age ot it
 * @owner: Owner of it
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)/*To ensure that it point to a struct*/
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
