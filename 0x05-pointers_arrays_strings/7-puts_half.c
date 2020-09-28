#include "holberton.h"
#include <string.h>
/**
 * puts_half - check the code for Holberton School students.
 * @str: string pointer to be determined.
 * Return: void.
 */
void puts_half(char *str)
{
int x, y;
x = strlen(str);
if (x % 2 == 0)
y = x / 2;
else
y = (x - 1) / 2;
for (; y < x; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
