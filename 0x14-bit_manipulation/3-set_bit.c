#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1 at a given index.
 * @n:number to change.
 * @index: index number.
 * Return: int number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1 << index;

	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | m;
	return (1);
}
