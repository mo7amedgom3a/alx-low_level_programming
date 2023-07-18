#include <stdio.h>
#include <stdlib>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 *
 * Return: Pointer to the newly created dog (SUCCESS) or
 * NULL if insufficient memory was available (FAILURE)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int size_name, size_o;

	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	size_name = strlen(name);
	d->name = malloc(size_name + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	memcpy(d->name, name, size_name);

	size_o = strlen(owner);
	d->owner = malloc(size_o + 1);

	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	memcpy(d->owner, owner, size_o);

	d->age = age;

	return (d);
}
