#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to traverse.
 * @index: index number.
 * Return: 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	m <<= index;
	if ((m & n) != 0)
		return (1);
	else
		return (0);
	return (-1);
}
