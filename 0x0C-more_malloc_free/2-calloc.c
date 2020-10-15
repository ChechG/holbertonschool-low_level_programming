#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *num;

	num = malloc(nmemb * size * sizeof(unsigned int));
	if (num == NULL)
	{
		exit(0);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(num, nmemb, size);
	return (num);
}
