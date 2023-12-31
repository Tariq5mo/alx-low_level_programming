#include <limits.h>
#include "main.h"

/**
 * print_number - print number
 *
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	int dig, rev;

	if (n == INT_MIN)
		_putchar("-2147483648");
	else if (n == INT_MAX)
		_putchar("2147483647");
	else if (n == 0)
		_putchar(n + '0');
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	rev = 0;
	while (n > 0)
	{
		dig = n % 10;
		rev = rev * 10 + dig;
		n = n / 10;
	}
	while (rev > 0)
	{
		dig = rev % 10;
		_putchar(dig + '0');
		rev = rev / 10;
	}
	_putchar('\n');
}
