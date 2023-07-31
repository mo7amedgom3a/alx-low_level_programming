#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a listint_t
 * @n: The element of the node to be added
 * @head: The head/first node of the list
 * Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = NULL;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
