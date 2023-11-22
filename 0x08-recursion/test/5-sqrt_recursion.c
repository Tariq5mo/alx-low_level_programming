#include "main.h"

/**
 * _sqrt - calculate the square
 *
 * @i: the number
 * @j: the product
 * Return: the result
 */
int _sqrt(int i, int j)
{
	if (i == j * j)/*if the square is valid*/
		return (j);
	else if (i < j * j)/*if is not valid*/
	{
		return (-1);
	}
	return (_sqrt(i, j + 1));
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
	return (_sqrt(n, m));
}
