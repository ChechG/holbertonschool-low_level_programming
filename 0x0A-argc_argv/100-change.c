#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array of pointers to strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		for (; x - 25 >= 0; x -= 25, cents++)
		{
		}
		for (; x - 10 >= 0; x -= 10, cents++)
		{
		}
		for (; x - 5 >= 0; x -= 5, cents++)
		{
		}
		for (; x - 2 >= 0; x -= 2, cents++)
		{
		}
	if (x == 1)
		cents++;

	printf("%d\n", cents);
	}
	return (0);
}
