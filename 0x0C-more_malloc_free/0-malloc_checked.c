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
	void *a;
        a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
