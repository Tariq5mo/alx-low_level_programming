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
	}
	n = 0;
	while (n < 26)
	{
		putchar(65 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
