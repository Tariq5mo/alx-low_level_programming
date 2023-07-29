#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 26)
	{
		putchar(97 + n);
		n++;
		if (n == 4 || n == 16)
			n++;
	}
	putchar('\n');
	return (0);
}
