#include "search_algos.h"
/**
 * jump_search - search for value array of int (Linear search algorithm)
 * @array: array of ints
 * @size: num of elements in array
 * @value: value to search for
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), prev = 0;
	int new_size = size;

	if (array == NULL)
		return (-1);
	while (array[mini(step, new_size) - 1] < value)
	{
		printf(" prim while Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= new_size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", step - prev, prev);
	while (array[prev] < value)
	{
		printf(" seg while Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if (prev == mini(step, new_size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}

int mini(int a, int b)
{
	if (a >= b)
		return b;
	else
		return a;
}