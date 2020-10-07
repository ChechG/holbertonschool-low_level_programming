#include "holberton.h"

int wildcmp(char *s1, char *s2);
int ast(char *s1, char *s2);

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
	else if ((*s2 + 1) != '*' && (*s2 + 1) != '\0')
		return (ast(s1 + 1, s2));

	if (*s1 == '\0')
		return (wildcmp(s1 + 1, s2));

	return(ast(s1 + 1, s2));
}

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
