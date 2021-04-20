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
	int step = sqrt(size), prev = 0, i;
	int new_size = size;

	if (array == NULL)
		return (-1);
	while (array[mini(step, new_size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= new_size)
			return (-1);
	}
	while (array[prev] < value)
	{
		printf("SEGUNDO WHILE Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if (prev == mini(step, new_size))
			return (-1);
	}
	if (step - prev < prev)
	{
		printf("Value found between indexes [%d] and [%d]\n", step - prev, prev);
		for (i = step - prev; i <= prev; i++)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	else if (step - prev >= prev)
		printf("Value found between indexes [%d] and [%d]\n", prev - 1, step - prev + 1);
	
	if (array[prev] == value)
		return (prev);
	return (-1);
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
