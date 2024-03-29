#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: address of the pointer to a dlistint_t list
 * @n: data(n) of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h = *head;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!h)
	{
		node->prev = h;
		*head = node;
		return (node);
	}

	while (h->next)
	{
		h = h->next;
	}
	h->next = node;
	node->prev = h;

	return (node);
}
