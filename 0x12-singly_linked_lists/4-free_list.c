#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head node of list_t
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		if (head->str)
			free(head->str);
		i = head;
		head = head->next;
		free(i);
	}
}
