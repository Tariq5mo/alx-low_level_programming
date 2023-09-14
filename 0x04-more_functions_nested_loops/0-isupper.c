#include "main.h"

/**
 * _isupper - is a function checks character is upper or not
 *
 * @c: check
 * Return: 1 if upper, 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90) /*This return if ii in range*/
		return (1);
	else
		return (0);
}
