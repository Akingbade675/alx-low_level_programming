#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of a pointer to dlistint_t list
 * @idx: the index of the list where the new node should be added
 * @n: the data(n) of new node to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int i;
	dlistint_t *node, *head = *h;
	
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	node->n = n;
	for (i = 0; head; head = head->next, i++)
	{
		if (i == idx)
		{
			if (i)
				(head->prev)->next = node;
			else
				*head = node;
			node->prev = head->prev;
			node->next = head;
			head->prev = node;
			
			return (node);
		}
	}

	return (NULL);
}
