#include "main.h"

/**
 * _strncpy - copy string
 *
 * @dest: the paste string
 * @src: the copy string
 * @n: the number of chars
 * Return: the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	if (src == NULL || dest == NULL)
		return (NULL);
	for (i = 0, j = 0; i < n; i++)
	{
		if (src[j] == '\0')
		{
			dest[i] = '\0';
			continue;
		}
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
