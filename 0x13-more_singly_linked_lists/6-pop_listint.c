#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of a pointer to listint_t
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	if (!(*head))
		return (0);

	int n = (*head)->n;
	listint_t *head_node = *head;

	*head = head_node->next;
	free(head_node);

	return (n);
}
