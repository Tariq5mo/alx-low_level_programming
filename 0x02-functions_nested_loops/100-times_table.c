#include <stdio.h>

/**
 * print_times_table - print times table
 *
 * @n: n times
 */
void print_times_table(int n)
{
	int p1, p2, p, n1, n2, n3;

	if (n > 0 && n < 15)
	{
		for (p1 = 0; p1 <= n; p1++)
		{
			for (p2 = 0; p2 <= n; p2++)
			{
				p = p1 * p2;
				if (p2 != 0)
				{
					putchar(',');
					putchar(' ');
					if (p <= 99)
						putchar(' ');
					if (p <= 9)
						putchar(' ');
				}
				n1 = p % 10;
				p = p / 10;
				n2 = p % 10;
				p = p / 10;
				n3 = p % 10;
				if (n3 != 0)
					putchar(n3 + '0');
				if (n2 != 0 || n3 != 0)
					putchar(n2 + '0');
				putchar(n1 + '0');
			}
			putchar('\n');
		}
	}
}
