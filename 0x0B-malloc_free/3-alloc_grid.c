#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a p to 2 dim
 *
 * @width: the width of array
 * @height: the height
 * Return: the 2 dim
*/
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0, j = 0; i < height; j++)
	{
		*(*(p + i) + j) = 0;
		if (j == width - 1)
		{
			j = 0;
			i++;
		}
	}
	return (p);
}
