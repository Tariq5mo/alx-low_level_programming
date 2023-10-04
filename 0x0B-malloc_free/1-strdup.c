#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the lenght
 *
 * @s: the string
 * Return: the length
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	for (; *(s + i) != '\0'; i++)
		;
	return (i);
}
/**
 * _strdup - copy a string to another
 *
 * @str: the string
 * Return: the depublicated string
*/
char *_strdup(char *str)
{
	int l, i;
	char *s;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
		s[l] = str[l];
	return (s);
	free(s);
}
