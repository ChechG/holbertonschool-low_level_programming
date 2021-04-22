#include "search_algos.h"
/**
 * binary_search - search for value array of int
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

/**
 * exponential_search - search for value array of int
 * @array: array of ints
 * @size: num of elements in array
 * @value: value to search for
 * Return: index of value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right = 0;

	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i == size)
		right = i - 1;
	else
		right = i;
	i /= 2;
	printf("Value found between indexes [%li] and [%li]\n", i, right);
	return (binary_search(array + i, right + 1, value));
}
