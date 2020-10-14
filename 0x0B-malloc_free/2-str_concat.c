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
 * str_concat - check the code for Holberton School students.
 * @s1: char pointer to be determined.
 * @s2: char pointer to be determined.
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);
	c = a + b;
	arr = (char *)malloc(c * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < b; i++)
	{
		arr[i + a] = s2[i];
	}
	return (arr);
}
