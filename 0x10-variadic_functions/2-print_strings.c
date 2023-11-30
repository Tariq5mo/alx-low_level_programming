#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 *
 * @separator: The string to be printed between the strings
 * @n: The numbers of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		printf("%s", s ? s : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
