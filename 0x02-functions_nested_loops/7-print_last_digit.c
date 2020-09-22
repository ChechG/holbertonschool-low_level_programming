#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @a: local variable to be determinded
 * Return: a.
 */
int print_last_digit(int a)
{
int n = a % 10;
if (n < 0)
{
n *= -1;
}
_putchar(n + '0');
return (n);
}
