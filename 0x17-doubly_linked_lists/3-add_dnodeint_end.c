#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a
 * dlistint_t list.
 * @head: double pointer to the list
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;
	
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (current)
		{
			if (current->next == NULL)
			{
				current->next = new;
				new->prev = current;
				break;
			}
			current = current->next;
		}
	}
	return (new);
}
