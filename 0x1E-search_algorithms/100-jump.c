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
	size_t step = sqrt(size), prev = 0, i = 0, s1 = step, j;

	if (array == NULL || size == 0)
		return (-1);
	while (array[mini(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			printf("Value found between indexes ");
			printf("[%lu] and [%li]\n", s1 * (i - 1), s1 * i);
			for (j = s1 * i; j < size; j++)
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			return (-1);
		}
		i += 1;
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (prev == mini(step, size))
			return (-1);
		prev += sqrt(size);
		i += 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", s1 * (i - 1), s1 * i);
	for (j = s1 * (i - 1); j < s1 * i; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			break;
	}
	return (j);
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
