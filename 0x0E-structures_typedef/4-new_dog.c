#include "dog.h"
#include <stdio.h>

/**
 * new_dog - this sdfd
 *
 * @name: ldkf
 * @age: lsrhf
 * @owner: sjflds
 * Return: wejfwe
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p->name = malloc(sizeof(*name));
	if (p->name == NULL)
		return (NULL);
	p->name = name;
	p->owner = malloc(sizeof(*owner));
	if (p->owner == NULL)
		return (NULL);
	p->owner = owner;
	p->age = age;
	return (p);
}
