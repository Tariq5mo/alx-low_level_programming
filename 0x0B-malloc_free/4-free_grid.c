#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the last 2-d array
 *
 * @grid: the array
 * @height: the height of array
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
		free(grid);
}
