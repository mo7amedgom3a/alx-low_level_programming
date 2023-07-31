#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of a listint_t list
 * @n: Nodes in the @listint_t
 * @head: The first node of list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
