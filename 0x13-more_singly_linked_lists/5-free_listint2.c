#include "lists.h"

/**
 * free_listint2 - Frees a list_t list
 * @head: Double pointer to the head/first node of list_t
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head)
	{
		while (*head != NULL)
		{
			next_node = *head;
			*head = next_node->next;
			free(next_node);
		}
	}
}
