#include "search_algos.h"
/**
 * binarySearch - search for value array of int
 * @array: array of ints
 * @l: left value
 * @r: right value
 * @value: value to compare
 * Return: index of value
 */
int binarySearch(int *array, int l, int r, int value)
{
	int mid;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binarySearch(array, l, mid - 1, value));
		return (binarySearch(array, mid + 1, r, value));
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
	size_t i;

	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%li] and [%li]\n", i / 2, i);
	return (binarySearch(array, i / 2, mini(i, size - 1), value));
}

/**
 * mini - finds min num between a and b
 * @a: first number
 * @b: second number
 * Return: min num
 */
size_t mini(size_t a, size_t b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}
