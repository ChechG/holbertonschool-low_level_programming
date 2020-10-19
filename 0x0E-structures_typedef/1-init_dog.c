#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: pointer to struct.
 * @name: name of dog.
 * @age: age of the dog.
 * @owner: owner of dog.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
