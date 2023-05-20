#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node at a given index
 * @h: double pointer to the dlistint_t.
 * @idx: the index where the new node should be added.
 * @n: an integer variable
 *
 * Return: address of node, NULL if failed or not possible to add at index idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = (h) ? *h : NULL;
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);
	do {
		if (idx == 0)
			return (add_dnodeint(h, n));
		else if ((current) && (i == idx))
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			current->next->prev = new;
			new->next = current->next;
			new->prev = current;
			current->next = new;
		}
		current = (current) ? current->next : NULL;
		++i;
	} while (current);
	return (NULL);
}
