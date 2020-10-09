#include "holberton.h"

/**
 * *_strcmp - check the code for Holberton School students.
 * @s1: char pointer to be determined.
 * @s2: char pointre to be determined.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '0' && s1[i] != '0'; i++)
	{
		if (s1[i] == s2[i])
			continue;

		else
		{
			int b = s1[i] - s2[i];

			return (b);
		}
	}
	return (0);
}
