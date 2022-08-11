#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t lis
 * @head: pointer to the address of list_t
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0, i = 0;
	list_t *end = *head, *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	if (str)
	{
		node->str = strdup(str);
		while (str[i])
			len++;
		node->len = len;
	}
	else
	{
		node->str = "(nil)";
		node->len = 0;
	}
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		while (end->next)
			end = end->next;
		end->next = node;
	}

	return (node);
}