#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check the code for Holberton School students.
 * @c: char pointer to be determined.
 * @size: unsigned int of size.
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		for (x = 0; x < size; x++)
		{
		arr[x] = c;
		}
		return (arr);
	}
	return (NULL);
}
