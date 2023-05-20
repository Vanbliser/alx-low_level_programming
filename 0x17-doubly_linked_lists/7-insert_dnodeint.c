#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given
 * position. Index starts at 0
 * @h: double pointer to the dlistint_h.
 * @idx: the index of the list where the new node should be added.
 * @n: an integer variable
 *
 * Return: the address of the new node, or NULL if it failed or
 * not possible to add the new node at index idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int i = -1;

	if (h == NULL)
		return (NULL);
	while (current)
	{
		++i;
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			current->prev->next = new;
			new->prev = current->prev;
			new->next = current;
			current->prev = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
