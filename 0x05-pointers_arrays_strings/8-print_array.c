#include "main.h"

/**
 * print_array - print certain number of elements
 *
 * @a: the array
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		exit (1);
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
}
