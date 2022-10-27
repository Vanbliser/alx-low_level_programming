#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: the 2 dimentsional grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int __attribute__ ((unused)) height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}

