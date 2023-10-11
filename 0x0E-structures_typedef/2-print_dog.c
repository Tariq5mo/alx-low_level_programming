#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print details of the dog
 *
 * @d: the struct
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d) /*checks if it's exit*/
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
