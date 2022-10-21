#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t no_of_node = 0;

	while (h) 
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		no_of_node++;
	}
	return (no_of_node);
}

