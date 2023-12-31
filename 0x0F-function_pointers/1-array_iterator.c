#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: The array
 * @size: The size
 * @action: Point to the function which executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
