#include "holberton.h"
/**
 * primo - check the code for Holberton School students.
 * @y: int to be determined.
 * @x: int to be determined.
 * Return: int.
 */
int primo(int y, int x)
{
	if (y % x == 0 && x < y)
	{
		return (0);
	}
	else if (y % x != 0 && x < y)
	{
		return (primo(y, x + 1));
	}

	return (1);
}
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: int to be determined.
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}

	return (primo(n, 2));
}
