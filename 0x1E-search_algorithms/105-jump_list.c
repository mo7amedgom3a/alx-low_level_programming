#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, step_size = sqrt(size);
	listint_t *prev = list, *jump = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (jump->index + 1 < size && jump->n < value)
	{
		prev = jump;
		while (jump->index < step)
		{
			jump = jump->next;
			if (jump->index + 1 == size)
				break;
		}
		step += step_size;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, jump->index);

	while (prev->index < jump->index && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
