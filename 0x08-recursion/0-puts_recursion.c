#include "main.h"

/**
 * _puts_recursion - function print a string
 *
 * @s: desired string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int j;

	j = 0;
	if (*(s + j) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + j));
	j++;
	_puts_recursion(s + m);/*Go to next char*/
}
