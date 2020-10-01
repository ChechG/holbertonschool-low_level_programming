#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: int pointer to be determined.
 * @n: char pointre to be determined.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i1 = 0;
	int c;

	n -= 1;
	while (i1 < n)
	{
		c = a[i1];
		a[i1] = a[n];
		a[n] = c;
		i1++;
		n--;
	}
}
