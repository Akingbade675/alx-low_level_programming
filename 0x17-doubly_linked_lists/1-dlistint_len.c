#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = h;
	size_t i;

	for (i = 0; head; i++)
	{
		head = head->next;
	}

	return (i);
}
