#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 5 || (n > 5 && n < 17) || (n > 17 && n < 26))
	{
		putchar(97 + n);
		n++;
		if (n == 5 || n == 17)
			n++;
	}
	putchar('\n');
	return (0);
}
