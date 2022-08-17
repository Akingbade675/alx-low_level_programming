#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: memory address of a pointer to listint_t
 * @idx: position to insert node
 * @n: data n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = *head, *node, *current = *head;
	unsigned int i;

	if (!current)
		return (NULL);

	for (i = 0; idx >= i; i++)
	{
		if (i == idx)
		{
			node = malloc(sizeof(*node));
			if (!node)
				return (NULL);
			node->n = n;
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
			}
			else
			{
				node->next = current;
				prev->next = node;
			}
			return (node);
		}
		if (prev && !current)
			break;
		prev = current;
		current = current->next;
	}

	return (NULL);
}
