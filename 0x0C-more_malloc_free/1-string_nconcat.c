#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: int pinter to be determined.
 * Return: 0 or 1.
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
 * string_nconcat - check the code for Holberton School students.
 * @s1: string 1.
 * @s2: string 2.
 * @n: unsigned int.
 * Return: char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, i;

	a = _strlen(s1);
	b = _strlen(s2);
	str = (char *)malloc(a * sizeof(char) + n + 1);
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}
	if (n >= b)
	{
		for (i = 0; i < b; i++)
		{
			str[i + a] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str[i + a] = s2[i];
		}
	}
	return (str);
}
