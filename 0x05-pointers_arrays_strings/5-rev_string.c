#include "main.h"

/**
 * _strlen - reverse and print
 *
 * @s: the array which reverse and print
 * Return: i the lenght
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse an array
 *
 * @s: is a pointer to first elemnt
 */
void rev_string(char *s)
{
	int i, j;
	char t;
	int len = _strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
