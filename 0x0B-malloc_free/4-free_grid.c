#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the code for Holberton School students.
 * @grid: int pointer to pointer to be determined.
 * @height: int to be determined.
 * Return: 0 or 1.
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
