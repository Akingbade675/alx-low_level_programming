#include "lists.h"

/**
 * get_nodeint_at_index - get the node at index of a listint_t linked list
 * @head: pointer to listint_t
 * @index: index of node to be gotten
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
		for (i = 0; index >= i && head; i++)
		{
			if (i == index)
				return (head);
			head = head->next;
		}
	return (NULL);
}
