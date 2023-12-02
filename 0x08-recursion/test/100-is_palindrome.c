#include "main.h"

/**
 * _strlen_recursion - return the length of tstring
 *
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _palind - determine if the string is palindrome or not
 *
 * @s: the string
 * @n: the beginng
 * @m: the end
 * Return: 1 if palindrome 0 if not
 */
int _palind(char *s, int n, int m)
{
	if (*(s + n) != *(s + m))
		return (0);
	else if (n == m || n > m)
		return (1);
	return (_palind(s, n + 1, m - 1));
}

/**
 * is_palindrome - also for palindrome
 *
 * @s: The string
 * Return: 1 or 0 if it's not
 */
int is_palindrome(char *s)
{
	int n, m;

	n = 0;
	m = _strlen_recursion(s) - 1;
	return (_palind(s, n, m));
}
