#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - FUNCTION FREES ALLOC MEMORY
 * @grid: pointer to grid[0]
 * @height: roll number in grid
 *
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
