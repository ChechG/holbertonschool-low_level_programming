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
	largo = max - min;
	arr = (int *)malloc(largo * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);

}
