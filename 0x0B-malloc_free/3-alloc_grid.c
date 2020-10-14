#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code for Holberton School students.
 * @width: int to be determined.
 * @height: int to be determined.
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
	}
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
