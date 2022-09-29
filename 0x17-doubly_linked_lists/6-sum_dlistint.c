#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a dlistint_t linked list
 * @head: pointer to a dlistint_t linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for ( ; head; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
