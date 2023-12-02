#include "main.h"

/**
 * _strlen - lenght
 *
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s != NULL && *(s + l) != '\0'; l++)/*if it's NULL or empty*/
		;
	return (l);
}

/**
 * str_concat - conect two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the conected string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	/*Be empty if are NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	printf("%d\t%d\n", _strlen(s1), _strlen(s2));
	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		s[i] = s1[i];
	j = i;
	for (i = 0; s2[i] != '\0'; j++, i++)
		s[j] = s2[i];
	s[j] = '\0';
	return (s);
}
