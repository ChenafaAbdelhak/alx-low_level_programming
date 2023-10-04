#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid -free matrice of int
 * @width: w
 * @height: h
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
