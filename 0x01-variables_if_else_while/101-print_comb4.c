#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0;

	while (n1 <= 9)
	{
		n2 = n1 + 1;
		while (n2 <= 9)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
			n3 = 0;
		}
		n1++;
		n3 = 0;
		n2 = 0;
	}
	putchar('\n');
	return (0);
}
