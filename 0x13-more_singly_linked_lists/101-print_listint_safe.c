#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *prev = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current < prev)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		prev = current;
		current = current->next;
	}

	return (count);
}
