#include "main.h"

/**
 * _print_rev_recursion - print strings reverse
 *
 * @s: string which i want to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*Good*/
		return;
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
