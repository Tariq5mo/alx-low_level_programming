#include "main.h"

/**
 * _strlen_recursion - return the length
 *
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - determine if palindrome or not
 *
 * @s:The string
 * @n:The bigiining
 * @m:The end
 * Return: 1 if palindrome 0 if not
 */
int palindrome(char *s, int n, int m)
{
	if (*(s + n) != *(s + m))
		return (0);
	else if (n == m || n > m)
		return (1);
	return (palindrome(s, n + 1, m - 1));
}
/**
 * is_palindrome - also for palindrome
 *
 * @s: The string
 * Return: 1 or 0 if not
 */
int is_palindrome(char *s)
{
	int n, m;

	n = 0;
	m = _strlen_recursion(s) - 1;
	return (palindrome(s, n, m));
}
