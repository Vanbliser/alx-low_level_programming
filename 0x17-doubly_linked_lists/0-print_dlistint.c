#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list.
 * @h: variable of type dlistint_t doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++no_of_nodes;
		h = h->next;
	}
	return no_of_nodes;
}
