#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements in a linked
 * listint_t list.
 * @h: the linked listint_t list
 *
 * Return: the number of elements in the linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
