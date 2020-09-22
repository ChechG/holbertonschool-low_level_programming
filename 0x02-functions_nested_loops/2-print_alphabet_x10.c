#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int n;
for (n = 0; n <= 10; n++)
{
char a;
char b = 'z';
for (a = 'a'; a < b; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
