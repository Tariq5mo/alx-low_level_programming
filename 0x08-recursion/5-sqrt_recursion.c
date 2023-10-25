#include "main.h"

/**
 * _od - odd
 *
 * @i: number
 * @j: product
 * Return: the odd
 */
int _od(int i, int j)
{
	if (i == j * j)
		return (j);
	else if (i < j * j)
	{
		return (-1);
	}
	return (odd(i, j + 1));
}

/**
 * _sqrt_recursion - the square is
 *
 * @n: number
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	int m;

	m = 1;
	return (odd(n, m));
}
