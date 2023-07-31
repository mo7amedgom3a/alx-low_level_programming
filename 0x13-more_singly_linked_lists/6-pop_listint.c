#include "lists.h"

/**
 * pop_listint - Deletes the node of a listint_t list
 * and return the head node's data @n
 * @head: Double pointer the head node
 * Return: The head node data n, 0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	size_t data;

	if (!*h)
		return (0);

	node = *h;
	data = node->n;
	*h = node->next;
	free(node);

	return (data);
}
