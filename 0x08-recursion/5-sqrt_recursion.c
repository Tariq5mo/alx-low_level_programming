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
<<<<<<< HEAD
	return (_od(i, j + 1));
=======
	return (_sqrt(i, j + 1));
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
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
<<<<<<< HEAD
	return (_od(n, m));
=======
	return (_sqrt(n, m));
>>>>>>> 5b7f6c9bb422f4240d53c687aa7bb7a0df6bb340
}
