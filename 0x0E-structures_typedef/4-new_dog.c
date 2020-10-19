#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: char pointer to be determined.
 * @src: char pointer to be determined.
 * Return: 0 or 1.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (src[a] != '\0')
		a++;

	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
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

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
	{
		return (NULL);
	}
	else
	{
		nd->name = name;
		nd->age = age;
		nd->owner = owner;
	}
	return (nd);
}
