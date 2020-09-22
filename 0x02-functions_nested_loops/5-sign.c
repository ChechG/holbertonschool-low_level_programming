#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 * @n: local variable to be determinded
 * Return: 0, 1 or -1.
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
