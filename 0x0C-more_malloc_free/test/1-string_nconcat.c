#include "main.h"

/**
 * _strlen - calculate the array's length
 *
 * @s: the string
 * Return: the length
*/
unsigned int _strlen(char *s)
{
	unsigned int j;

	for (j = 0; *(s + j) != '\0'; j++)
		;
	return (j);
}
/**
 * string_nconcat - concatenates two strings by nth of second string
 *
 * @s1: 1th string
 * @s2: 2nd string
 * @n: the nth from the second string
 * Return: the result string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)/*If n is greater or equal to s2 then use the entire string s2*/
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(str + i) = *(s2 + j);
	*(str + i) = '\0';
	return (str);
}
