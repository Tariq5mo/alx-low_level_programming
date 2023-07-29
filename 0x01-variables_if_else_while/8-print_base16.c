#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (j < 6)
	{
		putchar('a' + j);
		j++;
	}
	putchar('\n');
	return (0);
}
