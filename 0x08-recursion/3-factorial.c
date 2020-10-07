#include "holberton.h"
/**
 * factorial - check the code for Holberton School students.
 * @n: char pointer to be determined.
 * Return: int.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
