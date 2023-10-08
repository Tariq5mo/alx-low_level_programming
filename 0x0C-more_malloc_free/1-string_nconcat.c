#include "main.h"

/**
 * _strlen - calculate the length of array
 *
 * @s: the string
 * Return: the length
*/
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the n-th from the s2
 * Return: the desired string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;
	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(s + i) = *(s2 + j);
	*(s + i) = '\0';
	return (s);
}
