#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function to free the previously created grid
 * @grid: The grid previously created
 * @height: height of the grid
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
