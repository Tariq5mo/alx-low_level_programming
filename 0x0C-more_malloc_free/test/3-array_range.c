#include "main.h"

/**
 * array_range - put from min to max in an array
 *
 * @min: the start of range
 * @max: the last and greatest number
 * Return: the range array
*/
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	if (min < 0 && max >= 0)
		ptr = malloc(sizeof(int) * (max + (-1 * min) + 1));
	else
		ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		*(ptr + i) = j;
	return (ptr);
}
