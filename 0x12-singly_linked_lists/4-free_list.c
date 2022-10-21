#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to a list_t
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list *tmp_old;

	if (tmp)
	{
		while (tmp->next)
		{
			tmp_old = tmp;
			tmp = tmp->next;
			free(tmp_old);
		}
	}
	free(tmp);
}

