#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
