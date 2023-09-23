#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: is the string which will print it
 */
void puts2(char *str)
{
	int l;

	for (l = 0; *(str + l) > '\0'; l = l + 2)
	{
		putchar(*(str + l));
	}
}
