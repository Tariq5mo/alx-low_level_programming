#include "main.h"

/**
 * _puts_recursion - print a string by recursions
 *
 * @s: the string which printed
 */
void _puts_recursion(char *s)
{
	int i, j;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	_puts_recursion(s + i);/*recursion*/
	_putchar(*(s + j));
	j++;
	_puts_recursion(s + j);/*Go to next char*/
}
