#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to head of the dlistint_t list
 * Return: number of nodes of dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;
	dlistint_t *i;

	if (!h)
		return (num_of_nodes);

	num_of_nodes++;
	i = h->next;

	while (i != NULL)
	{
		num_of_nodes++;
		i = i->next;
	}

	return (num_of_nodes);
}
