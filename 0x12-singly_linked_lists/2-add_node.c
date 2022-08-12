#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the address of a variable list_t
 * @str: string pointer
 * Return: address to the new element, or null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	while (str[len])
		len++;
	node->len = len;

	node->next = *head;

	*head = node;

	return (node);
}
