#include "lists.h"
/**
 * free_listint_safe - this function free a list in safe mode
 * @h: the head of list
 * Description: this function free a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		size++;
	}

	*h = NULL;

	return (size);
}
