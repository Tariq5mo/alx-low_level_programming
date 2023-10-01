#include "main.h"

/**
 * odd - odd
 *
 * @n: the number
 * @m: the product
 * Return: the pro
 */
int odd(int n,int m)
{
	if (n == m *m)
		return (m);
	else if (n < m *m)
	{
		return (-1);
	}
	return odd(n, m + 1);
}

/**
 * _sqrt_recursion - the square
 *
 * @n: the number
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	int m;

	m = 1;
	return (odd(n, m));
}
