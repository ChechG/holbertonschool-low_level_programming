#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: unsigned int to be determined.
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	int *a;
        a = (int *)malloc(b * sizeof(unsigned int));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
