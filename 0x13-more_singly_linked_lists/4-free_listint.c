#include "lists.h"

/**
 * free_listint - Frees a list_t list
 * @head: Pointer to the head/first node of list_t
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
