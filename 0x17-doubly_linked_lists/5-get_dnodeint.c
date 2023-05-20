#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to a dlistint_t
 * @index:  index of the node, starting from 0
 *
 * Return: the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = -1;

	while (head)
	{
		++i;
		if (index == i)
			return (head);
		head = head->next;
	}
	return (NULL);
}
