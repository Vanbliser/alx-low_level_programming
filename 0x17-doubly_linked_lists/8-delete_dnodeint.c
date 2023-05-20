#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: double pointer to the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (head == NULL)
		return (-1);

	while (current)
	{
		if (i == index)
		{
			if ((current->next) && (current->prev))
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				current->next = NULL;
				current->prev = NULL;
			}
			else if ((current->prev) && (current->next == NULL))
			{
				current->prev->next = NULL;
				current->prev = NULL;
			}
			else if ((current->prev == NULL) && (current->next == NULL))
			{
				*head = NULL;
			}
			else if ((current->prev == NULL) && (current->next))
			{
				*head = current->next;
				current->next->prev = NULL;
				current->next = NULL;
			}
			free(current);
			return (1);
		}
		++i;
		current = current->next;
	}
	return (-1);
}
