#include "holberton.h"
#include <string.h>
/**
 * _puts - check the code for Holberton School students.
 * @str: char string to be determined.
 * Return: void.
 */
void _puts(char *str)
{
unsigned int a;
int n = 0;
while (str[n] != '\0')
n++;

for (a = 0; a < n; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
