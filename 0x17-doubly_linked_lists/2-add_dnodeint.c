#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: address of the pointer to a dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	node->next = *head;
	*head = node;

	return (node);
}
