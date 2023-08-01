#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * of a listint_t linked list
 * @head: double pointer to the head of the listint_t linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, or
 * -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	curr = *head;
	i = 0;
	while (i < index && curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);
	return (1);
}
