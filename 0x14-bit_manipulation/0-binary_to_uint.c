#include "holberton.h"
/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: int to be determined.
 * @y: int to be determined.
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - convets binary to decimal.
 * @b: string of binary numbers.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, potencia = 1, numero = 0, rem, dec = 0;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			numero++;
			i++;
		}
		else
			return (0);
	}
	for (i = numero - 1; i >= 0; i--)
	{
		c += (b[i] - '0') * potencia;
		potencia *= 10;
	}
	while (c != 0)
	{
		rem = c % 10;
		c /= 10;
		dec += rem * _pow_recursion(2, j);
		++j;
	}
	return (dec);
}
