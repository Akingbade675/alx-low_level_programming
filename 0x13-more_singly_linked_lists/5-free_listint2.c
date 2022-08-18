#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: address of a pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (*head && head)
	{
		while (*head != NULL)
		{
			cur = (*head)->next;
			free(*head);
			*head = cur;
		}
	}
}
