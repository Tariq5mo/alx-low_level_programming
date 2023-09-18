#include "main.h"

/**
 *  _puts - print
 *
 * @str: the array which will evaluate it's length
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
