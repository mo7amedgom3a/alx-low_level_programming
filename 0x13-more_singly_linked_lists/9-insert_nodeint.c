#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t linked list
 * @idx: the index of the list where the new node should be added
 * @n: element n of the node to be added
 * Return: address of the new element (SUCCESS), or
 * NULL if it failed (FAILURE), or
 * NULL if is not possible to add the new node at index @idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	i = 0;

	while (i < idx - 1 && (current_node != NULL))
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
