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

<<<<<<< HEAD
	j = 0;
	for (; *(s + j) != '\0'; j++)
=======
	for (l = 0; s != NULL && *(s + l) != '\0'; l++)/*if it's NULL or empty*/
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
		;
	return (j);
}

/**
 * str_concat - connect two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
<<<<<<< HEAD
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
=======
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
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		s[i] = s1[i];
<<<<<<< HEAD
	for (i = 0, j = _strlen(s1); s2[i] != '\0'; j++, i++)
=======
	j = i;
	for (i = 0; s2[i] != '\0'; j++, i++)
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
		s[j] = s2[i];
	s[j] = '\0';
	return (s);
}
