#include "main.h"

/**
 * _strcpy - copy and paste
 *
 * @src: the source string
 * @dest: the paste
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
