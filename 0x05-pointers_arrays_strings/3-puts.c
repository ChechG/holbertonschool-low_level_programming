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
for (a = 0; a < strlen(str); a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
