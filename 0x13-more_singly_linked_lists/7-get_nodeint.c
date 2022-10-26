#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list. where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 * @head: the list
 * @index: the nth node
 *
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head); i++)
		head = head->next;
	if ((i == index) && (head))
		return (head);
	else
		return (NULL);
}

