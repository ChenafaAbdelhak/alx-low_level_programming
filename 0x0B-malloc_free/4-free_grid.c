#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid -free matrice of int
 * @height: h
 * @grid: g
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
	}
}
