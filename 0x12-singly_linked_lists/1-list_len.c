#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int lnode = 0;

	if (!h)
		return (0);

	do {
		lnode++;
		h = h->next;
	} while (h);

	return (lnode);
}
