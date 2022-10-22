#include "lists.h"
/**
 * free_list -  a function that frees a list_t list.
 * @head: the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

