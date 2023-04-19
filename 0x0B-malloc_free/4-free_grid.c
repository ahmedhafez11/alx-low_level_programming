#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free array for grid
 * @grid: the grid
 * @height: height of grid
 * Description: free memory
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
