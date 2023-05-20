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
	dlistint_t *new = NULL;
	dlistint_t *head = *h, *prev = *h;
	unsigned int i;

	if (h == NULL || (head == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	head = head->next;
	for (i = 1; i < idx; i++)
	{
		if (prev->next == NULL)
			return (NULL);
		head = head->next;
		prev = prev->next;
	}
	if (head == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = prev;
	prev->next = new;
	if (head != NULL)
		head->prev = new;
	return (new);
}
