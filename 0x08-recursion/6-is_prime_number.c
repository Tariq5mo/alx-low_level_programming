#include "main.h"

/**
 * Det_prime - determine if the num is prime or not
 *
 * @i: the num
 * @j: the divied num
 * Return: 1 if prime 0 not
 */
int Det_prime(int i, int j)
{
	if (i == j)
		return (1);
	else if (((i % j) == 0) || j > i)
		return (0);
	return (Det_prime(i, j + 1));
}

/**
 * is_prime_number - it is  return if num is prime or not
 *
 * @n: number
 * Return: 1 for prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int m;

	m = 2;
	return (Det_prime(n, m));
}
