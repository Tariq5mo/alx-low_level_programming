#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Linear interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	/* 0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9 */
	if (!array)
		return (-1);
	for (; pos < size && low <= pos;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]) *
			      (value - array[low])));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (pos < size && array[pos] == value)
				return (pos);
			if (pos < size && value < array[pos])
				high = pos - 1;
			else
				low = pos + 1;
		}
		else
			printf("Value checked array[%ld] is out of range\n", pos);
		pos = low + (((double)(high - low) / (array[high] - array[low]) *
			      (value - array[low])));
	}
	return (-1);
}
