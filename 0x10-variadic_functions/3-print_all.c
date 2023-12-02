#include "variadic_functions.h"

/**
 * ch - print a character
 *
 * @sp: the separator
 * @arg: the argument
 */
void ch(char *sp, va_list arg)
{
	printf("%s%c", sp, va_arg(arg, int));
}
/**
 * in - print an integer
 *
 * @sp: the separator
 * @arg: the argument
 */
void in(char *sp, va_list arg)
{
	printf("%s%d", sp, va_arg(arg, int));
}
/**
 * flo - print a float
 *
 * @sp: the separator
 * @arg: the argument
 */
void flo(char *sp, va_list arg)
{
	printf("%s%f", sp, va_arg(arg, double));
}
/**
 * str - print a string
 *
 * @sp: the separator
 * @t: the argument
 */
void str(char *sp, va_list t)
{
	char *s;

	s = va_arg(t, char *);
	if (!s)
		s = "(nil)";
	printf("%s%s", sp, s);
}
/**
 * print_all - print the character
 *
 * @format: the formaters
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *s = "";
	va_list arg;
	cf cha[] = {
		{"s", str},
		{"i", in},
		{"f", flo},
		{"c", ch},
		{NULL, NULL}
	};
	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (cha[j].s)
		{
			if (format[i] == cha[j].s[0])
			{
				cha[j].f(s, arg);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
