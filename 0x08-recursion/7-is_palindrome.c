#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		s++;
		i++;
		i = i + _strlen_recursion(s);
	}

	return (i);
}
/**
 * pali - check the code for Holberton School students.
 * @ini: initial position.
 * @fin: final position.
 * @s: char pointer to be determined.
 * Return: int.
 */
int pali(char *s, int ini, int fin)
{
	if (s[ini] != s[fin])
	{
		return (0);

	}
	else if (s[ini] == s[fin] && ini < fin)
	{
		ini++;
		fin--;
		pali(s, ini, fin);
	}

	return (1);
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: char pointer to be determined.
 * Return: int.
 */
int is_palindrome(char *s)
{
	int f = _strlen_recursion(s);

	return (pali(s, 0, f - 1));
}
