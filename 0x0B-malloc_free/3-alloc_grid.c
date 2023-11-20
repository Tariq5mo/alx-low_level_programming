#include "main.h"

/**
 * alloc_grid - create two dimensional array
 *
 * @width: width of the array
 * @height:  height of the array
 * Return: 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **s, n, m;

	s = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || s == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		s[n] = malloc(sizeof(**s) * width);
		if (s[n] == NULL)
		{
			for (m = 0; m < n; m++)
			{
				free(s[m]);
			}
			free(s);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			s[n][m] = 0;
	}
	return (s);
}
