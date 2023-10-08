#include "main.h"

/**
 * array_range - return range
 *
 * @min: the min
 * @max: the max
 * Return: the range array
*/
int *array_range(int min, int max)
{
	int *p, i, j;

	if (min < 0 || max < 0)
	{
		if (min < 0)
			i = -1 * min;
		if (max < 0)
			j = -1 * max;
	}
	else
	{
		i = min;
		j = max;
	}
	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (j - i + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		*(p + i) = j;
	return (p);
}
