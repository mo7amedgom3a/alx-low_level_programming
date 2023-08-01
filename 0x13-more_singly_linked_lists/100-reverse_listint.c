#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: double pointer to head of the listint_t linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (!(*head))
		return (NULL);

	while ((*head)->next)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	(*head)->next = prev_node;

	return (*head);
}
