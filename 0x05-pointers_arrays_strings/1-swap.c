#include <stdio.h>

/**
 * swap_int - swap the values between two pointers
 *
 * @a: the first pointer
 * @b: the second pointer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n
}
