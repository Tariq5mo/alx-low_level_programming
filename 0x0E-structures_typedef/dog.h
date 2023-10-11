#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - for poppy
 *
 * @name: it's name
 * @age:  it's age
 * @owner: who is the owner
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
