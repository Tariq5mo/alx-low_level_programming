#include "main.h"

/**
 * times_table - this function print the 9 times table
 *
 */
void times_table(void)
{
	int n, m, pro;

	for (n = 0; n < 10; n++) /*This is for n*/
	{
		for (m = 0; m < 10; m++) /*This is for m*/
		{
			pro = n * m;
			if ((pro / 10) != 0)
				_putchar((pro / 10) + '0');
			else if (m != 0)
				_putchar(' ');
			_putchar((pro % 10) + '0');
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
