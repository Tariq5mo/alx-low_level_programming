#include "main.h"

/**
 * _puts_recursion - print strings
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
	int n;

	n = 0;
	if (*(s + n) == '\0')
	{
		putchar('\n');
		return (0);
	}
	putchar(*(s + n));
	n++;
	_puts_recursion(s + n);
}
