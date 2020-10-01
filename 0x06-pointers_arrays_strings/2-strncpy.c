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
 * *_strncpy - check the code for Holberton School students.
 * @dest: char pointer to be determined.
 * @src: char pointer to be determined.
 * @n: int to be determined.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
