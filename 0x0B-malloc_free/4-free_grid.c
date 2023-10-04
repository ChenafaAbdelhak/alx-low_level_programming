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
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
