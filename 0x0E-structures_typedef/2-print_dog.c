#include "dog.h"

/**
 * print_dog - print details of the dog
 *
 * @d: the struct
*/
void print_dog(struct dog *d)
{
	if (d) /*checks if it's exit*/
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
