#include "main.h"

/**
 * _pow_recursion - power of a normal number
 *
 * @x: number
 * @y: power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)/*For condition*/
		return (-1);
	else if (y == 0)/*else if*/
		return (1);
	else if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x, y));
}
