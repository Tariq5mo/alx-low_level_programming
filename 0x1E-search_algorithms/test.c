#include <stdio.h>
#include <math.h>

int search(int *array, int value)
{
	int low = 0;
	int high = sizeof(array) / sizeof(array[0]) - 1;

	if (array[low] == value)
		return low;

	if (high <= low)
		return -1; // Value not found

	int step = sqrt(high - low + 1);

	while (low <= high)
	{
		if (high - low < step)
		{
			for (int i = low; i <= high; ++i)
			{
				printf("Value checked array[%d] = %d\n", i, array[i]);
				if (array[i] == value)
					return i;
			}
			return -1;
		}
		else
		{
			int mid = low + step;
			if (mid > high)
				mid = high;

			printf("Value checked array[%d] = %d\n", mid, array[mid]);
			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}

	return -1; // Value not found
}