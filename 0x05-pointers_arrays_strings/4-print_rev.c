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
 * print_rev - reverse and print
 *
 * @s: the array which reverse and print
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
