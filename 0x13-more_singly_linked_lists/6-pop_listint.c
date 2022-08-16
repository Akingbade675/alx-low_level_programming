#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of a pointer to listint_t
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	head_node = *head;

	*head = head_node->next;
	free(head_node);

	return (n);
}
