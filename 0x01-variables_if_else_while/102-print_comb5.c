#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, n4, num1, num2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					num1 = n1 * 10 + n2;
					num2 = n3 * 10 + n4;
					if (num2 <= num1)
						continue;
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(' ');
					putchar(n3 + '0');
					putchar(n4 + '0');
					if (!(num1 == 98 && num2 == 99))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
