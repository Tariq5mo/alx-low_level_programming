#include "main.h"

/**
 * _strlen_recursion - return the length of a strnig
 *
 * @s: the string
 * Return: the length of it
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/*This for conditon*/
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
