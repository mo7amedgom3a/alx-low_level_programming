#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of list_t list
 * @head: Address of node
 * @str: New node to add
 * Return: Address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_head == NULL || !head)
	{
		return (NULL);
	}
	else
	{
		new_head->str = strdup(str);

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_head->len = strlen(new_node->str);
		new_head->next = *head;
		*head = new;
		return (new_head);
	}
}
