#include "lists.h"

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

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to list_t
 * @str: char constant to a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new)
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = length(str);
		*head = new;
	}
	return (*head);
}

