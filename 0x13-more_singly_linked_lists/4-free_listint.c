#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: the listint_t to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
