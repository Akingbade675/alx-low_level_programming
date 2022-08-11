#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int lnode = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		lnode++;
		h = h->next;
	}

	return (lnode);
}
