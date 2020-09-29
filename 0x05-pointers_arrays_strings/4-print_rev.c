#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: cahr pointer to be determined.
 * Return: 0 or 1.
 */
void print_rev(char *s)
{
int n = 0;
while (s[n] != '\0')
n++;

while (n >= 0)
{
n--;
_putchar(s[n]);
}
_putchar('\n');
}
