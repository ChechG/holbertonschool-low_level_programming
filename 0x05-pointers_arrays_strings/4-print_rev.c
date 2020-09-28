#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @s: cahr pointer to be determined.
 * Return: 0 or 1.
 */
void print_rev(char *s)
{
int a = strlen(s);
while (a >= 0)
{
a--;
_putchar(s[a]);
}
_putchar('\n');
}
