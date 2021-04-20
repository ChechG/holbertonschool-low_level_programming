#include "search_algos.h"
/**
 * interpolation_search - search for value array of int
 * @array: array of ints
 * @size: num of elements in array
 * @value: value to search for
 * Return: index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0;
	int h = size - 1;
	int m;

	while ((array[h] != array[l]) && (value >= array[l]) && (value <= array[h]))
	{
		m = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		if (array[m] < value)
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}
	m = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
	if (value == array[l])
		return (l);
	printf("Value checked array[%d] is out of range\n", m);
	return (-1);
}
