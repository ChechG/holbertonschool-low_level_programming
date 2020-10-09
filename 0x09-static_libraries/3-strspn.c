#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * @accept: char pointer to compare.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int num = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				num++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			break;
		}
	}
	return (num);
}
