#include "main.h"

/**
 * _print_rev_recursion - print a string by reversing
 *
 * @s: string reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*If valid*/
		return;
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
