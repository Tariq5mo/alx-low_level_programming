#include "main.h"

/**
 * _pow_recursion - power of a number
 *
 * @x: the number
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x, y));
}
