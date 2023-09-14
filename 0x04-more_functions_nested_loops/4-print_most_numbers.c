#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; (i >= 0 && i <= 9); i++) /*This for print*/
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}
