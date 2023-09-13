#include "main.h"

/**
 * _isalpha - checks if it's a charachter or not
 *
 * @c: the character to check
 *
 * Return: 1 if charachter, 0 if otherside
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
