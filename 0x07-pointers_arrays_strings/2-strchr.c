#include "holberton.h"
#include <string.h>
/**
 * _strchr - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * @c: char to compare.
 * Return: pointer or null.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (0);
}
