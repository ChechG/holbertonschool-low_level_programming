#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: pinter to int to be determined.
 * Return: int.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *string_toupper - check the code for Holberton School students.
 * @p: char pointer to be determined.
 * Return: char.
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; i < _strlen(p); i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
	}
	return (p);
}
