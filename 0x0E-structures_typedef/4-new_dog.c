#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check the code for Holberton School students.
 * @s: int pinter to be determined.
 * Return: 0 or 1.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * _strdup - check the code for Holberton School students.
 * @str: char pointer to be determined.
 * Return: char.
 */
char *_strdup(char *str)
{
	int x, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		x = _strlen(str);
		arr = (char *)malloc(x * sizeof(char) + 1);
		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < x; i++)
		{
			arr[i] = str[i];
		}
	}
	return (arr);
}
/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: third member.
 * Return: struct.
 * Description: Longer description
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *nd;
	char *nom, *due;

	nom = _strdup(name);
	due = _strdup(owner);

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
	{
		return (NULL);
	}
	nom = _strdup(name);
	if (nom == NULL)
	{
		free(nd);
		return (NULL);
	}
	due = _strdup(owner);
	if (due == NULL)
	{
		free(nom);
		free(nd);
		return (NULL);
	}
	nd->name = nom;
	nd->age = age;
	nd->owner = due;
	return (nd);
}
