#include "main.h"

/**
 * _strcmp - compare between two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 0 are equals, 1 s1 > s2, -1 s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		;
	j = s1[i] - s2[i];
	return (j);
}
