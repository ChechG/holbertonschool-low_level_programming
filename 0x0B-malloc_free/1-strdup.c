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
 * _strdup - check the code for Holberton School students.
 * @str: char pointer to be determined.
 * Return: char.
 */
char *_strdup(char *str)
{
	int x, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		x = _strlen(str);
		arr = (char *)malloc(x * sizeof(char) + 1);
		for (i = 0; i < x; i++)
		{
			arr[i] = str[i];
		}
	}
	return (arr);
}
