#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_head = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr_head);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr_head || !(ptr_head->next))
			return (-1);
		ptr_head = ptr_head->next;
		i++;
	}


	present = ptr_head->next;
	ptr_head->next = present->next;
	free(present);

	return (1);
}

