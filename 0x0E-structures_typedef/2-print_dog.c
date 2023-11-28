#include "dog.h"

/**
 * print_dog - Print informations of the dog
 *
 * @d: Point to a struct of dog
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL) /*checks if valid*/
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
