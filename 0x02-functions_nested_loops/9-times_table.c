#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: void.
 */
void times_table(void)
{
int a, b, c, sig;
int d, e;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
sig = a * (b + 1);
d = c / 10;
e = c % 10;
if (c > 9)
{
_putchar(d + '0');
_putchar(e + '0');
}
else
{
_putchar(c + '0');
}
if (b != 9)
{
_putchar(44);
_putchar(32);
}
if (c <= 9 && sig <= 9 && b != 9)
{
_putchar(32);
}
}
_putchar('\n');
}
}
