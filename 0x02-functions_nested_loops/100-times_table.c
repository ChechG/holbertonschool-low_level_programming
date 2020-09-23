#include "holberton.h"
/**
 * print_times_table - check the code for Holberton School students.
 * @n: integer less that 15
 * Return: void.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int a, b, c, w, x, y, z;
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
x = c % 10;
w = c / 10;
y = w / 10;
z = w % 10;
if (b != 0)
{
if (y != 0)
_putchar(y + '0');
else
_putchar(32);
if (c >= 10)
_putchar(z + '0');
else
_putchar(32);
}
_putchar(x + '0');
if (b != n)
{
_putchar(44);
_putchar(32);
}
else
_putchar('\n');
}
}
}
}
