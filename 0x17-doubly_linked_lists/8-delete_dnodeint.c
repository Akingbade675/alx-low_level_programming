#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: address of a pointer to dlistint_t linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i;
	dlistint_t *h = *head;

	for (i = 0; h; h = h->next)
	{
		if (i == index)
		{
			if (i)
				(h->prev)->next = h->next;
			else
				*head = h->next;

			if (h->next)
				(h->next)->prev = h->prev;
			
			free(h);

			return (1);
		}
	}

	return (-1);
}
