#include "holberton.h"
#include <stdio.h>

/**
 * _memset - check the code for Holberton School students.
 * @s: pointer to char.
 * @b: constant char.
 * @n: unsigned int.
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
