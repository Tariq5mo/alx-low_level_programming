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

	if (min > max)
		return (NULL);
	if (min < 0 || max < 0)
	{
		if (min < 0 && max >= 0)
			p = malloc(sizeof(int) * (max + (-1 * min) + 1));
		if (max < 0)
			p = malloc(sizeof(int) * (max - min + 1));
	}
	else
		p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		*(p + i) = j;
	return (p);
}
