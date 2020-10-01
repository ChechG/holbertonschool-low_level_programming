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
 * *_strcmp - check the code for Holberton School students.
 * @s1: char pointer to be determined.
 * @s2: char pointre to be determined.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = _strlen(s1);
	b = _strlen(s2);
	if (a == b)
	{
		return (0);
	}
	else if (a > b)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
