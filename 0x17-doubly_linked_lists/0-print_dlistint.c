#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = h;
	size_t i;

	for (i = 0; head; i++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}

	return (i);
}
