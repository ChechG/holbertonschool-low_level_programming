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
	int n, i;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	for (i = 0; i < n - 1; i++, p++)
	{
		printf("%02x ", *p);
	}
	printf("%02x\n", *p);
	return (0);
}
