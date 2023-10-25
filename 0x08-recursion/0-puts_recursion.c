#include "main.h"

/**
 * _puts_recursion - print strings
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
	int m;

	m = 0;
	if (*(s + m) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + m));
	m++;
	_puts_recursion(s + m);/*call recursion*/
}
