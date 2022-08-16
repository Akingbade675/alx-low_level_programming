#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: address of a pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		listint_t *cur = (*head)->next;
		static int i;

		if (cur)
		{
			i++;
			free_listint2(&cur);
			i--;
		}
		free(*head);

		if (!i)
			*head = NULL;
	}
}
