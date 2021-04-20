#include "search_algos.h"
/**
 * binary_search - search for value array of int (Linear search algorithm)
 * @array: array of ints
 * @size: num of elements in array
 * @value: value to search for
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, med, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		med = (left + right) / 2;
		if (array[med] < value)
			left = med + 1;
		else if (array[med] > value)
			right = med - 1;
		else
			return (med);
	}
	return (-1);
}
