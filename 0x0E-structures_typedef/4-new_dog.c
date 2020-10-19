#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
	{
		free (nd);
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
