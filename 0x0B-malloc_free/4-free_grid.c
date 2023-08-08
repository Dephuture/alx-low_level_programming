#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees array
 * @grid: take 2d grid
 * @height: takes height dimension
 * Return: 0
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
