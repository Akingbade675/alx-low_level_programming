#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address of a pointer to listint_t
 * @n: number variable
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail = *head;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		for ( ; tail->next; tail = tail->next)
			;
		tail->next = node;
	}

	return (node);
}
