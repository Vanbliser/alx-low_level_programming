#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * if the linked list is empty return 0
 * @head: pointer to a pointer to a listint_t
 *
 * Return: the head node’s data (n) as an int.
 */
int pop_listint(listint_t **head)
{
	if (*head)
	{
		listint_t *tmp = *head;
		int data = (*head)->n;

		*head = (*head)->next;
		free(tmp);
		return (data);
	}
	else
	{
		return (0);
	}

}

