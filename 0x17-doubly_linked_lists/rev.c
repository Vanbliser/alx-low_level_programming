#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list both ways.
 * @h: variable of type dlistint_t doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint_rev(const dlistint_t *h)
{
	const dlistint_t *p;
	size_t no_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++no_of_nodes;
		p = h;
		h = h->next;
	}
	printf("#########\n");
	while (p)
	{
		printf("%d\n", p->n);
        p = p->prev;	
	}
	return (no_of_nodes);
}
