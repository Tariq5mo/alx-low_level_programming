#include "main.h"

/**
 * _puts_recursion - print a string by recursions
 *
 * @s: the string which printed
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	_puts_recursion(s + i);/*recursion*/
}
