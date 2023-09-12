#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char gg[] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(gg[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
