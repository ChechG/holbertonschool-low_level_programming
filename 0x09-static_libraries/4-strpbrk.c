#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * @accept: char pointer to compare.
 * Return: char pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
