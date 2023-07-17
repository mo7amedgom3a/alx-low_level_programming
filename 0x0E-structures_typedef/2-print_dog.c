#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the data elements of struct dog
 *
 * @d: Pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
