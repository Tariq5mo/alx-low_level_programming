#include "main.h"

/**
 * _prime - determine if the num is prime or not
 *
 * @i: the num
 * @j: the divied num
 * Return: 1 if prime 0 not
 */
int _prime(int i, int j)
{
	if (i == j)
		return (1);
	else if (((i % j) == 0) || j > i)
		return (0);
	return (Det_prime(i, j + 1));
}

/**
 * is_prime_number - send to Det_prime, then return is num prime or not
 *
 * @n: number
 * Return: 1 for prime, 0 if not
 */
int is_prime_number(int n)
{
	int m;

	m = 2;
	return (Det_prime(n, m));
}
