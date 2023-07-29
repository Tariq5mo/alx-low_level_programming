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
		putchar(122 - n);
		n++;
	}
	putchar('\n');
	return (0);
}
