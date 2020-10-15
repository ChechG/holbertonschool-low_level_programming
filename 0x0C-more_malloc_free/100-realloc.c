#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: pointer of the memory size.
 * @old_size: old size.
 * @new_size: new size of memory.
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(new_size);

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		free(ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
