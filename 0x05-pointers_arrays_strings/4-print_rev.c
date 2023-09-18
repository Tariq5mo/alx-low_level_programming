#include "main.h"

/**
 * print_rev - reverse and print
 *
 * @s: the array which reverse and print
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
