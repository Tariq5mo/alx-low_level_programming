#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - for poppy
 *
 * @name: it's name
 * @age:  it's age
 * @owner: who is the owner
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
