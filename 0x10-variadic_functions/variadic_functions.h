#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*For variadic functions*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct fp - struct
 * @s: the string
 * @f: the function pointer
 *
 * Description: the struct
*/
typedef struct fp
{
	char *s;
	void (*f)(char *, va_list);
} cf;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*endifndef*/
