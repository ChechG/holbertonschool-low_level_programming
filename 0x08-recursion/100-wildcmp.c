#include "holberton.h"

int wildcmp(char *s1, char *s2);
int ast(char *s1, char *s2);
/**
 * wildcmp - check the code for Holberton School students.
 * @s1: char to be determined.
 * @s2: char to be determined.
 * Return: int.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (ast(s1, s2));

	if (*s2 == '\0' && *s1 != '\0')
		return (0);

	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (1);
		}
		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
/**
 * ast - check the code for Holberton School students.
 * @s1: char to be determined.
 * @s2: char to be determined.
 * Return: int.
 */
int ast(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (wildcmp(s1, s2));

	if (*s2 == '\0')
		return (ast(s1 + 1, s2));

	if (*(s2 + 1) == '\0')
		return (1);

	s2++;

	if (*s2 + 1 == *s1)
		return (wildcmp(s1, s2 + 1));
	else if (*s2 + 1 == '*')
		return (ast(s1, s2 + 1));
	else if (*(s2 + 1) != '*' && *(s2 + 1) != '\0')
		return (ast(s1 + 1, s2));

	if (*s1 == '\0')
		return (wildcmp(s1, s2));

	return(ast(s1 + 1, s2));
}
