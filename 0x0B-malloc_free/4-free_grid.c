#include "main.h"

/**
 * free_grid - free 2 grid
 *
 * @grid: The two dimensional array
 * @height: the height of it
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)/*Free the rest of the the grid*/
	{
		free(grid[j]);/*Then the array of pointers*/
	}
		free(grid);
}
