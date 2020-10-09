#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: array of pointers to strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; *(argv[a] + b) != '\0'; b++)
		{
			if (*(argv[a] + b) < '0' || *(argv[a] + b) > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
