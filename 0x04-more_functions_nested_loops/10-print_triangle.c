#include "main.h"
/**
 * print_triangle - triangle
 *
 * @size:siztriangle
 */
void print_triangle(int size)
{
	if (size <= 0) /*This is for traingke*/
		_putchar('\n');
	else
	{
		int i, l_, lh;

		for (i = 1; i <= size; i++)
		{
			for (l_ = 1; l_ <= (size - i); l_++)
			{
				_putchar(' ');
			}
			for (lh = 1; lh <= i; lh++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
