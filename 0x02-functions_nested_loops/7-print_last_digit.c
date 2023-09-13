#include "main.h"
/**
 * print_last_digit - is a function that give last digit
 *
 * @p: the parameter
 * Return: p % 10 which the last digit of p
 */
int print_last_digit(int p)
{
	int m; /*This is the m*/

	if (p < 0)
		m = -1 * (p % 10);
	else
		m = p % 10;
	_putchar(m + '0');
	return (m);
}
