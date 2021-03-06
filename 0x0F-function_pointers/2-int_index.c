#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: array of ints
 * @size: size of array.
 * @cmp: function to compare numbers with 98
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
