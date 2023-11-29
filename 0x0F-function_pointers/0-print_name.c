#include "function_pointers.h"

/**
 * print_name - Print a name by using function pointer
 *
 * @name: The name
 * @f:the pointer that point to the function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)/*Ckech if are valid*/
		f(name);
}
