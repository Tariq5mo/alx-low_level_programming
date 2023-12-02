#include "main.h"

/**
<<<<<<< HEAD
 * _print_rev_recursion - print a string by reversing
 *
 * @s: string reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*If valid*/
=======
 * _print_rev_recursion - Print the strings in reverse
 *
 * @s: Original string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*if valid*/
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
		return;
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
