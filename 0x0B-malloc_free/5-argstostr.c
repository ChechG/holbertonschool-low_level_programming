#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: int pinter to be determined.
 * @av: pointer to pointer to array of char.
 * Return: char.
 */
char *argstostr(int ac, char **av)
{
	int i, k, j, cont;
	char *quote;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j] != '\0'; j++)
		{
			cont++;
		}
	}
	cont += ac;
	quote = (char *)malloc(cont * sizeof(char));
	if (quote == NULL)
	{
		return (NULL);
	}
	else
	{
	i = 0;
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j] != '\0'; j++, i++)
		{
			quote[i] = av[k][j];
		}
		quote[i++] = '\n';
	}
	}
	return (quote);
}
