#include "main.h"

/**
 * _memcpy - copy and paste memory area
 *
 * @dest: the paste
 * @src: the paste
 * @n: the number
 * Return: the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		*(dest + l) = *(src + l);
	}
	return (dest);
}
