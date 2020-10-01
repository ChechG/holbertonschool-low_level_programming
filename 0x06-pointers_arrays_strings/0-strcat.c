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
 * *_strcat - check the code for Holberton School students.
 * @dest: char pointer to be determined.
 * @src: char pointre to be determined.
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
	int a, i;

	a = _strlen(dest);
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	return (dest);
}
