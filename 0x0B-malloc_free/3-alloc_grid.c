#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers. Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

