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
	int l, leng, g = 0;
	char *p;

	p = "";
	leng = _strlen(s);
	for (l = 0; *(s + l) > '\0'; l++)
	{
		*(p + l) = *(s + l);
	}
	for (l = leng - 1; l >= 0; l--)
	{
		*(s + g) = *(p + l);
		g++;
	}
}
