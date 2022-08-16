#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: menory address of a pointer to listint_t
 * @index: position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = *head;
	int i;

	for (i = 0; i <= index && current; i++)
	{
		if (i == index)
		{
			if (index == 0)
				*head = current->next;
			else
				prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
	}
	return (-1);
}
