#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: address of the pointer to a dlistint_t list
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

	while (head->next)
	{
		head = head->next;
	}
	head->next = node;
	node->prev = head;

	return (node);
}
