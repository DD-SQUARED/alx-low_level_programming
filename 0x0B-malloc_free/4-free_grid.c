#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2d array freed
 * @grid: 2d grid
 * @height: height of dimension grid
 * Return: Nothing
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

