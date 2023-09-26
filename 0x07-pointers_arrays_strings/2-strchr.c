#include "main.h"

/**
 * _strchr - search for char
 *
 * @s: the string
 * @c: the char
 * Return: array or NULL
 */
char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; *(s + l) >= '\0'; l++)
	{
		if (*(s + l) == c)
		{
			return (s + l);
		}
	}
	return (NULL);
}
