#include "holberton.h"

/**
 * _memset - check the code for Holberton School students.
 * @s: pointer to char.
 * @b: constant char.
 * @n: unsigned int.
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
