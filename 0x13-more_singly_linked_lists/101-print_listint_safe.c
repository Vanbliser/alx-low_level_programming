#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr1 = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		if (ptr1 == ptr2)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				node_count++;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			ptr1 = ptr1->next;
			while (ptr1 != ptr2)
			{
				node_count++;
				ptr1 = ptr1->next;
			}

			return (node_count);
		}

		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of node in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count, i = 0;

	node_count = looped_listint_len(head);

	if (node_count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

			node_count++;
		}
	}

	else
	{
		for (i = 0; i < node_count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_count);
}

