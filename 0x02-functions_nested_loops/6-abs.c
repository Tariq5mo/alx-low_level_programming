#include "main.h"

/**
 * _abs - is a function that calculate the absolute value
 *
 * @n: is the num
 * Return: n which it's the absolute value
 */
int _abs(int n)
{
	if (n < 0) /*This for loop*/
	{
		n = (n / -1);
		return (n);
	}
	else
		return (n);
}
