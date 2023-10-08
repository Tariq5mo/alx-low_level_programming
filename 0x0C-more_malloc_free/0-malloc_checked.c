#include "main.h"

/**
 * malloc_checked - Allocates memory
 *
 * @b: the size
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
