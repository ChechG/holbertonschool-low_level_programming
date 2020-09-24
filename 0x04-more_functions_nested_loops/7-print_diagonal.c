#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: int to be determined.
 * Return: void.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
}
else
_putchar(10);
}

