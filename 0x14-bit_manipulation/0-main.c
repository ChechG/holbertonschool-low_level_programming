#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("0");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("1111111111");
	printf("%u\n", n);
	return (0);
}