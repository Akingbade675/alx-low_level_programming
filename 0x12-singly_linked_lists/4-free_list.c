#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		/* assign head node to tmp node */
		tmp = head;
		/* make head point to next node on list */
		head = head->next;
		/* safely free node inside of tmp */
		free(tmp->str);
		free(tmp);
	}
}
