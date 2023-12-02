#include "main.h"

/**
 * malloc_checked - Allocates memory space
 *
 * @b: the size of the space
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
