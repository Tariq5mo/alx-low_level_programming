#include "variadic_functions.h"

/**
 * sum_them_all - Calculate sum of all its parameters.
 *
 * @n: The number of aruments
 * Return: The sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	va_start(arg, n);
	for (i = 1, sum = 0; i <= n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
