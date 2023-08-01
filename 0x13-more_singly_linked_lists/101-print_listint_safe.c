#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *tortoise = head, *hare = head;

    if (head == NULL)
        return (0);

    while (1)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;

        if (hare == NULL || hare->next == NULL)
            break;

        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = head;

            while (tortoise != hare)
            {
                printf("[%p] %d\n", (void *)tortoise, tortoise->n);
                count++;
                tortoise = tortoise->next;
                hare = hare->next;
            }

            printf("[%p] %d\n", (void *)tortoise, tortoise->n);
            count++;

            hare = hare->next;
            while (tortoise != hare)
            {
                printf("[%p] %d\n", (void *)hare, hare->n);
                count++;
                hare = hare->next;
            }

            return (count);
        }
    }

    while (tortoise != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;
        tortoise = tortoise->next;
    }

    return (count);
}
