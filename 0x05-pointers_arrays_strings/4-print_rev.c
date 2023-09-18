#include "main.h"

/**
 * print_rev - reverse and print
 *
 * @s: the array which reverse and print
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	for (; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
