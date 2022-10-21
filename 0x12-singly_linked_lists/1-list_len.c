#include "main.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list.
 * @h: a pointer to list_t
 *
 * Return: the number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t no_of_node = 0;
	list_t *list = h;

	while (list)
	{
		list = list->next;
		no_of_node++;
	}
	return (no_of_node);
}

