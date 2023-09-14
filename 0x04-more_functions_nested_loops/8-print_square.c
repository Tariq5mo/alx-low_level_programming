#include "main.h"

/**
 * print_square - function
 *
 * @size: square
 */
void print_square(int size)
{
	int l1, l2;

	if (size <= 0) /*This is begin*/
		_putchar('\n');
	for (l1 = 1; l1 <= size; l1++)
	{
		for (l2 = 1; l2 <= size; l2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
