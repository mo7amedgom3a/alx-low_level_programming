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

	if (!head || !new_head)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = strlen(new_node->str);
	*head = new_node;

	return (new_node);
}
