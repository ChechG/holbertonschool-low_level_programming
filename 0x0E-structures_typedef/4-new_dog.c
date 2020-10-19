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
