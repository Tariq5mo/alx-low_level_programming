#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers until 98
 *
 * @n: the number which printed until 98
 */
void print_to_98(int n)
{
	while (n < 98) /*This for outer*/
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	while (n > 98) /*This is for innter*/
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
