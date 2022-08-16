#include "lists.h"

/**
 * listint_len - find the length of a linked list
 * @h: pointer to listint_t
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int lnode = 0;

	for ( ; h; lnode++)
		h = h->next;

	return (lnode);
}
