#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: int variable to be determined.
 * Return: void.
 */
void print_triangle(int size)
{
int a, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= (size - a))
_putchar(32);
else
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}
