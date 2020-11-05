#include "holberton.h"

/**
 * flip_bits - returns num of bits to flip one number to another.
 * @n: first number.
 * @m: second number.
 * Return: num of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
