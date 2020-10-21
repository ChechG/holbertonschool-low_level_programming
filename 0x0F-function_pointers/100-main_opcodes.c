#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check if a number is equal to 98
 * @argc: num of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned char *p;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[2]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x\n", *p);
	return (0);
}
