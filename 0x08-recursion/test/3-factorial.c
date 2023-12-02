#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *
 * @n: a number
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
