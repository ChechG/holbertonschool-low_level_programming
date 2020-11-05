#include "holberton.h"

/**
 * print_binary - converts and prints decimal to binary.
 * @n: number to convert.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;

	if (n > 1)
	{
		m = n & 1;
		print_binary(n >> 1);
	}
	_putchar(m + '0');
}
