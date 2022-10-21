#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointr to pointer to list_t
 * @str: variable constant string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		new->len = length(str);
		new->next = NULL;
		(*head)->next = new;
	}
	return (new);
}


/**
 * length - a function to find the length of a string
 * @str: a string
 *
 * Return: the length of the string
 */
unsigned int length(const char *str)
{
	unsigned int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

