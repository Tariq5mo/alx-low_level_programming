#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of one chars
 *
 * @size: the size of the array
 * @c: the character which the content of the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *c;

	if (size == 0)
		return (NULL);
	c = malloc(sizeof(char) * size);
	if (c == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		c[j] = c;
	return (c);
}
