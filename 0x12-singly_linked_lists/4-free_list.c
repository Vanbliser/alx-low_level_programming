#include "lists.h"
/**
 * free_list -  a function that frees a list_t list.
 * @head: the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *tmp_old;
	if (tmp)
	{
		while(tmp->next)
		{
			tmp_old = tmp;
			tmp = tmp->next;
			free(tmp_old->str);
			free(tmp_old);
		}
	}
	free(tmp->str);
	free(tmp);

}	

