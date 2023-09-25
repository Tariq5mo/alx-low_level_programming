#include "main.h"

/**
 * _memset - fill memory
 *
 * @s: the array
 * @b: the constant
 * @n: the number of first elements
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
