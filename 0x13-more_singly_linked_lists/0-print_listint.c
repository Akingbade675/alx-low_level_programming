#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int lnode = 0;

	for ( ; h; lnode++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (lnode);
}
