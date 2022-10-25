#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to a listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *tmp = h;
	size_t length = 0;

	while(tmp)
	{
		printf("%d", tmp->n);
		length++;
	}
	return(length);
}

