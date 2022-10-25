#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * str needs to be duplicated. You are allowed to use strdup
 * @head: pointer to a pointer to a list_t list
 * @str: a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_t_ptr, *tmp_ptr;

	list_t_ptr = malloc(sizeof(list_t));

	if (list_t_ptr == NULL)
		return (NULL);

	list_t_ptr->str = strdup(str);
	list_t_ptr->len = length(str);
	list_t_ptr->next = NULL;
	tmp_ptr = *head;

	if (tmp_ptr == NULL)
	{
		*head = list_t_ptr;
	}
	else
	{
		while (tmp_ptr->next != NULL)
			tmp_ptr = tmp_ptr->next;
		tmp_ptr->next = list_t_ptr;
	}

	return (*head);
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

