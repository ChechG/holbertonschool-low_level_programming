#include "holberton.h"

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
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
