#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: pointer to array.
 * Return: 98.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
