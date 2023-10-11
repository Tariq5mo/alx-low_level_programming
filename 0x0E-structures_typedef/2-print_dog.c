#include "dog.h"

/**
 * print_dog - print details of the dog
 *
 * @d: the struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %lf\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\n", d->owner);
	return;
}
