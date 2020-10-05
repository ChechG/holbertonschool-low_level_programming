#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - check the code for Holberton School students.
 * @dest: pointer to to be determined char.
 * @src: pointer to to be determined destined char.
 * @n: unsigned int.
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + i);
		n--;
		i++;

	}
	return (dest);
}
