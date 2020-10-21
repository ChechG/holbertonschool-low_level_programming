#include <stdio.h>
#include <stdlib.h>

/**
 * main - check if a number is equal to 98
 * @argc: num of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n;

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
	return (0);
}
