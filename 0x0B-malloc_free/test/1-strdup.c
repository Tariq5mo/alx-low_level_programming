#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: The string which calculate it's length
 * Return: length
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	for (; *(s + k) != '\0'; k++)
		;
	return (k);
}
/**
 * _strdup - put a string to new memory location
 *
 * @str: The_old_string
 * Return: new_string
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j != i; j++)
		s[j] = str[j];
	return (s);
}
