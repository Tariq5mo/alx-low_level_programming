#include "main.h"

/**
 * _print_rev_recursion - Print the strings in reverse
 *
 * @s: Original string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*if valid*/
		return;
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
