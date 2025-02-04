#include "search_algos.h"

/**
 * print_c_arr - Prints the array being searched every time it changes.
 *
 * @arr: is a pointer to the first element of the original array.
 * @l: The first index the printing begins with.
 * @h: The last index the printing ends with.
*/
void print_c_arr(int *arr, int l, int h)
{
	int i;

	printf("Searching in array: %d", arr[l]);
	for (i = l + 1; i <= h; i++)
	{
		printf(", %d", arr[i]);
	}
	printf("\n");
}
/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int low_index, high_index, mid_index;

	if (!array)
		return (-1);
	for (low_index = 0, high_index = (int)size - 1; high_index >= low_index;)
	{
		print_c_arr(array, low_index, high_index);

		mid_index = (low_index + high_index) / 2;
		if (array[mid_index] == value)
			return (mid_index);
		else if (value < array[mid_index])
			high_index = mid_index - 1;
		else
			low_index = mid_index + 1;
	}
	return (-1);
}
