#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 * Return: void.
 */
void more_numbers(void)
{
int a, b, c, d;
for (a = 0; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
c = b / 10;
d = b % 10;
if (c > 0)
{
_putchar(c + '0');
}
_putchar(d + '0');
}
_putchar(10);
}
}
