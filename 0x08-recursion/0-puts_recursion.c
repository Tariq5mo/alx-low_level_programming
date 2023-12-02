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
<<<<<<< HEAD
	_putchar(*(s + i));
	i++;
	_puts_recursion(s + i);/*recursion*/
=======
	_putchar(*(s + j));
	j++;
	_puts_recursion(s + j);/*Go to next char*/
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
}
