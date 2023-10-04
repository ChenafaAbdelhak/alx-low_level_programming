#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate matrice of int
 * @width: w
 * @height: h
 * Return: ptr to the grid
 *
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **) malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		a[i] = (int *) malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);

}
