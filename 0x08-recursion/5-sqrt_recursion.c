#include "holberton.h"
/**
 * sqr - check the code for Holberton School students.
 * @a: int to be determined.
 * @v: int to be determined.
 * Return: int.
 */
int sqr(int a, int v)
{
	if (a * a == v)
	{
		return (a);
	}
	else if (a * a > v)
	{
		return (-1);
	}
	return (sqr(a + 1, v));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: int to be determined.
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}
