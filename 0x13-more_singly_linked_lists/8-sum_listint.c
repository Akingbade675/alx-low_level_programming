#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 * @head: pointer to listint_t
 * Return: dum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for ( ; head; head = head->next)
		sum += head->n;

	return (sum);
}
