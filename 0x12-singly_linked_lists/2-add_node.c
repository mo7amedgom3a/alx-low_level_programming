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

	if (new_node == NULL || !head)
	{
		return (NULL);
	}
	if (str)
	{
		new_node->str = strdup(str);

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
