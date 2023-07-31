#include "lists.h"

/**
 * listint_len - Prints the number of elemets in linked listint_t list
 * @h: Pointer to the head node of the linked list
 * Return: size_t, the number of nodes in alinked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
