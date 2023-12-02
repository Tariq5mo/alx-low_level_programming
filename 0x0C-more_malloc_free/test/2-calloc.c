#include "main.h"

/**
 * _calloc -  allocates memory for an array
 *
 * @nmemb: The elements's number
 * @size: The size of each element
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int j;
	unsigned char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	s = ptr;
	for (j = 0; j < nmemb * size; j++)
		s[j] = 0;
	return (ptr);
}
