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
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: the total string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s, ss[] = "";

	/*checks if both are NULL*/
	if (s1 == NULL && s2 == NULL)
		s1 = s2 = &ss[0];
	/*checks if one of them is NULL*/
	if (s1 == NULL)
		s1 = &ss[0];
	else if (s2 == NULL)
		s2 = &ss[0];
	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		s[i] = s1[i];
	i = 0;
	for (j = _strlen(s1); s2[i] != '\0'; j++, i++)
		s[j] = s2[i];
	s[j] = '\0';
	return (s);
}
