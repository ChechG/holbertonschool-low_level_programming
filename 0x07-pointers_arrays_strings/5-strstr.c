#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: char pointer to be determined.
 * @needle: char pointer to compare.
 * Return: char pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			if (needle[a] == haystack[b])
			{
				continue;
			}
		}
		return (needle + a);
	}
	return (0);
}
