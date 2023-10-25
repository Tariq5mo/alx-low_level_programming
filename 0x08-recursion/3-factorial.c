#include "main.h"

/**
 * factorial - factorial of a num is normal
 *
 * @n: the normal number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)/*This for me*/
		return (1);
	else if (n < 0)/*This for you*/
		return (-1);
	return (n * factorial(n - 1));
}
