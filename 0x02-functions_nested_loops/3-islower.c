#include "main.h"

/**
 * _islower - check if charachter is low or not
 *
 * @c: the character to check
 * Return: 1 if low, 0 if otherside
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
