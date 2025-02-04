#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	/* 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 */
	int size_int = (int)size, *current_p, *prev_p, step;

	if (!array)
		return (-1);
	for (current_p = array, step = sqrt(size_int);; current_p += step)
	{
		if (*current_p >= value || current_p - array >= size_int)
		{
			if (current_p - array == 0)
			{
				if (*current_p == value)
				{
					printf("Value checked array[%ld] = [%d]\n",
					       (size_t)(current_p - array), *current_p);
					return (current_p - array);
				}
					printf("Value found between indexes [%ld] and [%ld]\n",
					       (size_t)(current_p - array),
					       (size_t)(current_p - array));
					return (-1);
			}
			prev_p = current_p - step;
			printf("Value found between indexes [%ld] and [%ld]\n",
			       (size_t)(prev_p - array), (size_t)(current_p - array));
			for (; prev_p <= current_p && prev_p < array + size_int; prev_p++)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       (size_t)(prev_p - array), *prev_p);
				if (*prev_p == value)
					return (prev_p - array);
			}
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n",
		       (size_t)(current_p - array), *current_p);
	}
}
