#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: The string to be printed between numbers
 * @n: The numbers of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
