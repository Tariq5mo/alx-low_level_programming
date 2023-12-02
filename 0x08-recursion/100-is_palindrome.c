#include "main.h"

/**
 * _strlen_recursion - return the length of the caller
 *
 * @s: the string which determine it's length
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
 * _palindrome - determine if palindrome is
 *
 * @s:string
 * @n:beginng
 * @m:end
 * Return: 1 if palindrome 0 if not
 */
int _palindrome(char *s, int n, int m)
{
	if (*(s + n) != *(s + m))/*First condition*/
		return (0);
	else if (n == m || n > m)/*Second condition*/
		return (1);
	return (_palindrome(s, n + 1, m - 1));
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
	return (_palindrome(s, n, m));
}
