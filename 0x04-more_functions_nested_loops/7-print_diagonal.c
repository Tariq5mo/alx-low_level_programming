#include "main.h"

/**
 * print_diagonal - function.
 *
 * @n: diagonals
 */
void print_diagonal(int n)
{
	int l1, l2;

	if (n <= 0) /*This is for diagonal*/
		_putchar('\n');
	else
	{
		for (l1 = 1; l1 <= n; l1++)
		{
			for (l2 = 1; l2 <= (l1 - 1); l2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
