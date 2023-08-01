#include "lists.h"
/**
 * free_listint_safe - thsi function free a list in safe mode
 * @h: the head of list
 * Description: this function free a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *node;
	size_t size;
	int div;

	size = 0, node = *h;

	while (node != NULL)
	{
		div = node - node->next;
		if (div > 0)
		{
			tmp = node->next;
			free(node);
			node = tmp;
			size++;
		} else
		{
			free(node);
			*h = NULL;
			size++;
			break;
		}

	}

	*h = NULL;

	return (size);
}
