#include "dog.h"

/**
  * _strlen - calculate the length of a string
  * @s: The string
  * Return: The length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * new_dog - Create a new structure (new dog)
 *
 * @name: The name of the dog
 * @age: The age of it
 * @owner: The owner of it
 * Return: The new structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *po;

	p = malloc(sizeof(dog_t));
	if (!p || !name || !owner || age < 0)
		return (NULL);
	p->name = malloc(_strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(_strlen(owner) + 1);
	if (!p->owner)
	{
		free(p->name);/*name has it's block*/
		free(p);
	}
	for (po = p->name; *po != '\0'; po++, name++)
		*po = *name;
	for (po = p->owner; *po != '\0'; po++, owner++)
		*po = *owner;
	p->age = age;
	return (p);
}
