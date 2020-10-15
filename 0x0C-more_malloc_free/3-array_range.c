#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *array_range(int min, int max)
{
	int i, largo;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	largo = max - min + 1;
	arr = malloc(largo * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i <= largo; i++)
	{
		arr[i] = min + i;
	}
	return (arr);

}
