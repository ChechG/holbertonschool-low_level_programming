#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: first integer
 * Return: void.
 */
void print_to_98(int n)
{
int a;
if (n < 98)
{
for (a = n; a <= 98; a++)
{
printf("%d", a);
if (a < 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else if (n > 98)
{
for (a = n; a >= 98; a--)
{
printf("%d", a);
if (a > 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
printf("%d\n", n);
}
}
