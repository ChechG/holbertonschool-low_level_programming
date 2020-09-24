#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: int size of square to be determined.
 * Return: void.
 */
void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}

