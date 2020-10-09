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
	if (argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
