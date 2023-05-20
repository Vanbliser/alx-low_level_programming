#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to a dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	if (head != NULL)
	{
		while (head->next)
		{
			prev = head;
			head = head->next;
			free(prev);
		}
		free(head);
	}
}
