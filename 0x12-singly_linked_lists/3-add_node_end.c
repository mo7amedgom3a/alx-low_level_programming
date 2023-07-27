#include "lists.h"
/**
 * add_node_end - dds a new node at the end of a list_t list
 * @head: douple pointer to the head of the linked list
 * @str: pointer to string to be assigned to the added node's str property
 * Return: pointer to the new node (SUCCESS) OR
 * NULL, if there is insufficent memory available (FAILURE)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *i = *head;

	if (!new_node || !head)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}

	if (i)
	{
		while (i->next)
		i = i->next;
		i->next = new_node;
	}
	else
	*head = new_node;
	return (new_node);
}
