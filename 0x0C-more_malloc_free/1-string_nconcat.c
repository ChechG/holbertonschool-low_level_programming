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
	unsigned int a, b, c, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	for (i = 0; i < a; i++)
	{
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
	}
	str = (char *)malloc((i + j) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		str[b] = s1[b];
	}
	for (c = 0; c < n && s2[c] != '\0'; c++)
	{
		str[c + b] = s2[c];
	}
return (str);
}
