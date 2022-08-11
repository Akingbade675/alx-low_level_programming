#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t lnode = 0;

	if (!h)
		return (0);

	do {
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s", h->len, h->str);
			lnode++;
		}
		h = h->next;
	} while (h);

	return (lnode);
}
