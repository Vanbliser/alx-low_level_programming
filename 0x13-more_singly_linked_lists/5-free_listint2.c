#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current_list;

	if (head != NULL)
	{
		current_list = *head;
		while ((tmp = current_list) != NULL)
		{
			current_list = current_list->next;
			free(tmp);
		}
		*head = NULL;
	}
}
