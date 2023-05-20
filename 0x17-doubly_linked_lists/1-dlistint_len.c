#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: variable constant of type dlistint_t
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_element = 0;

	while (h)
	{
		++no_of_element;
		h = h->next;
	}
	return (no_of_element);
}
