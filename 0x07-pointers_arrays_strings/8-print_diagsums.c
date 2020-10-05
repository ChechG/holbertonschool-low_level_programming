#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: char pointer to be determined.
 * @size: int.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int x, z, num1, num2;

	num1 = 0;
	num2 = 0;
	for (x = 0; x < (size * size); x += size + 1)
	{
		num1 += a[x];
	}
	for (z = (size - 1); z < ((size * size) - (size - 1)); z += (size - 1))
	{
		num2 += a[z];
	}
	printf("%d, %d\n", num1, num2);
}
