#include <stdio.h>
#include "holberton.h"
/**
 * print_buffer - check the code for Holberton School students.
 * @b: pinter to int to be determined.
 * @size: int.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int cont = 0, i, i2, i3;
	i3 = 0;
	for (i = 0; i <= size; i += 10)
	{
		printf("%08x: ", cont);
		printf("%02x%02x ", b[i], b[i + 1]);
		printf("%02x%02x ", b[i + 2], b[i + 3]);
		printf("%02x%02x ", b[i + 4], b[i + 5]);
		printf("%02x%02x ", b[i + 6], b[i + 7]);
		cont = cont + 10;
		if(i % 10 == 0)
		{
			putchar('\n');
		}
	}
}
