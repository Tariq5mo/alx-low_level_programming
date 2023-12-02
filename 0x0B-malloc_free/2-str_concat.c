#include "main.h"

/**
 * _strlen - lenght
 *
 * @s: a  string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	for (; *(s + j) != '\0'; j++)
		;
	return (j);
}

/**
 * str_concat - connect two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the whole string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s, ss[] = '\0';

	if (s1 == NULL && s2 == NULL)
		s1 = s2 = &ss[0];
	if (s1 == NULL)
		s1 = &ss[0];
	else if (s2 == NULL)
		s2 = &ss[0];
	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		s[i] = s1[i];
	for (i = 0, j = _strlen(s1); s2[i] != '\0'; j++, i++)
		s[j] = s2[i];
	s[j] = '\0';
	return (s);
}
