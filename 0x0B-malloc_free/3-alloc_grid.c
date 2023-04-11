#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid
 * @width: size of width
 * @height: size of length
 *
 * Return: 0 on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	char **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid[i][j]);
}
