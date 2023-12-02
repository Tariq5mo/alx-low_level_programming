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

	p = malloc(sizeof(dog_t));
	if (!p || !name || !owner)
		return (NULL);
	p->name = malloc(1);
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}