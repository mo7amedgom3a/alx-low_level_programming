#include "lists.h"
/**
 * find_listint_loop - this function find a loop
 * @head: the head of list to find the loop
 * Description: this function find a loop
 * section header: the header of this function is lists.h)*
 * Return: the node were the loop is located
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
