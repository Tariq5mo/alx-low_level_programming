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

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
	w = 0;
	while (w < width)
	{
	    printf("%d ", grid[h][w]);
	    w++;
	}
	printf("\n");
	h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
	return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
