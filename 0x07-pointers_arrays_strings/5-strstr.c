#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: char pointer to be determined.
 * @needle: char pointer to compare.
 * Return: char pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k;

	while (haystack[i] != '\0')
	{
		k = i;
		while (needle[j] != '\0')
		{
			if (haystack[k] != needle[j])
			{
				break;
			}
			k++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return ('\0');
}
