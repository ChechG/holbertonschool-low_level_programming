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
	int step = sqrt(size), prev = 0, i = 0, s1 = step, j;
	int new_size = size;

	if (array == NULL)
		return (-1);
	while (array[mini(step, new_size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= new_size)
		{
			printf("Value found between indexes [%d] and [%d]\n", s1 * i, s1 * (i + 1));
			for (j = s1 * i; j < new_size; j++)
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
			return (-1);
		}
		i += 1;
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if (prev == mini(step, new_size))
		{
			printf("se va aca 2\n");
			return (-1);
		}
		i += 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", s1 * (i - 1), s1 * i);
	for (j = s1 * (i - 1); j <= s1 * i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (j == prev)
			break;
	}
	if (array[prev] == value)
		return (prev);
	return (0);
}
/**
 * mini - finds min num between a and b
 * @a: first number
 * @b: second number
 * Return: min num
 */
int mini(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}
