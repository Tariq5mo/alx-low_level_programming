#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; (i >= 0 && i <= 9); i++) /*This for loop*/
		_putchar(i + '0');
	_putchar('\n');
}
