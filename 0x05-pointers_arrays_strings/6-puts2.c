#include "holberton.h"
#include <string.h>
/**
 * puts2 - check the code for Holberton School students.
 * @str: int to be determined.
 * Return: void.
 */
void puts2(char *str)
{
int a;
int b = 0;
while (str[b] != '\0')
b++;

for (a = 0; a < b; a += 2)
{
_putchar(str[a]);
}
_putchar('\n');
}