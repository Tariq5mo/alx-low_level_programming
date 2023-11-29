#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: The array
 * @size: The size
 * @cmp: pointer to the function to be used to compare values
 * Return: The index of the first element for which the cmp doesn't return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n != 0)
			return (i);
	}
	return (-1);
}
