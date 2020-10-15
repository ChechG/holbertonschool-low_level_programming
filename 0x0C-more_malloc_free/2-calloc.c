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
        char *num;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	num = malloc(nmemb * size);
	if (num == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		num[i] = 0;
	}
	return (num);
}
