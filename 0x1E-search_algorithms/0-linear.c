#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *  using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int index, size_int;

	if (!array)
		return (-1);
	for (index = 0, size_int = (int)size; index < size_int; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
