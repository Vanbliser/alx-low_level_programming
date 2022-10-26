#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start_node = head;
	listint_t *end_node = head;

	if (!head)
		return (NULL);

	while (end_node && start_node && start_node->next)
	{
		start_node = start_node->next->next;
		end_node = end_node->next;
		if (start_node == end_node)
		{
			end_node = head;
			while (end_node != start_node)
			{
				end_node = end_node->next;
				start_node = start_node->next;
			}
			return (start_node);
		}
	}

	return (NULL);
}

