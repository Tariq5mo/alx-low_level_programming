#include "main.h"

/**
 * _strlen - reverse and print
 *
 * @s: the array which reverse and print
 * Return: i the lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strncat - add src to dest
 *
 * @dest: first string
 * @n: the bytes
 * @src: second string
 * Return: p which the array
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;
	int i, j;

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = _strlen(dest), j = 0; j < n; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	if (j < n)
		*(dest + i) = '\0';
	p = dest;
	return (p);
}
