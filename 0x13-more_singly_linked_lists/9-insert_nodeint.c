#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position. 
 * Description: where idx is the index of the list where the new node should
 * be added. Index starts at 0. if it is not possible to add the new node
 * at index idx, do not add the new node and return NULL
 * @head: the listint_t
 * @idx: the index
 * @n: an integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insert_node;
	listint_t *ptr_head = *head;

	insert_node = malloc(sizeof(listint_t));
	if (!insert_node || !head)
		return (NULL);

	insert_node->n = n;
	insert_node->next = NULL;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}

	for (i = 0; ptr_head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			insert_node->next = ptr_head->next;
			ptr_head->next = insert_node;
			return (insert_node);
		}
		else
			ptr_head = ptr_head->next;
	}

	return (NULL);	
}

