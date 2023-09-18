#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of the dlistint_t list
 * Return: number of nodes of dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *i;

	if (!h)
		return (size);

	printf("%d\n", h->n);
	size++;
	i = h->next;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		size++;
		i = i->next;
	}

	return (size);
}
