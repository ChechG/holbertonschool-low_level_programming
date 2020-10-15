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
	int *num;

	num = (int *)malloc(nmemb * size);
	memset(num, 0, size * nmemb);
	if (num == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (num);
}
