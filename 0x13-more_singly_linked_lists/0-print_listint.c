#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * You are allowed to use printf.
 * @h: a pointer to a listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
