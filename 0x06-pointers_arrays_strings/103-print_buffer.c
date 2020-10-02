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
	int cont = 0, i, i2;

	for (i = 0; i <= size; i += 10)
	{
		printf("%08x: ", cont);
		printf("%02x%02x ", b[i], b[i + 1]);
		printf("%02x%02x ", b[i + 2], b[i + 3]);
		printf("%02x%02x ", b[i + 4], b[i + 5]);
		printf("%02x%02x ", b[i + 6], b[i + 7]);
		cont = cont + 10;
		for (i2 = cont; i2 < cont + 10; i2 += 10)
		{
			putchar(b[i2]);
			putchar(b[i2 + 1]);
			putchar(b[i2 + 2]);
			putchar(b[i2 + 3]);
			putchar(b[i2 + 4]);
			putchar(b[i2 + 5]);
			putchar(b[i2 + 6]);
			putchar(b[i2 + 7]);
			putchar(b[i2 + 8]);
			putchar(b[i2 + 9]);
		}
		if(i % 10 == 0)
		{
			putchar('\n');
		}
	}
}
