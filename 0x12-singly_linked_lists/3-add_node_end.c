#include "lists.h"
#include <stdio.h>

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
	list_t *tmp = *head;

	if (new)
	{
		if ((*head) == NULL)
		{
			*head = new;
		}
		else
		{
			while ((*head)->next)
				*head = (*head)->next;
			(*head)->next = new;
		}
		new->str = strdup(str);
		new->len = length(str);
		new->next = NULL;
		*head = (tmp) ? tmp : new;
		return (new);
	}
	return (NULL);
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

