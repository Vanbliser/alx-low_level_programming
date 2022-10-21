#include "main.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointr to pointer to list_t
 * @str: variable constant string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t new = malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		new->len = length(str);
		new->next = NULL;
		*head->next = new;
	}
	return (new);
}

