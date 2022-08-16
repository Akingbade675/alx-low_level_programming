#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
			free_listint(head->next);
		free(head);
	}
}
