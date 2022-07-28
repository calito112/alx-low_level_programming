#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - free memory dynamically allocated
 * @grid: pointer to 2-D array
 * @height: row of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
