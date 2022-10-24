#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, **cell;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* cell would contain the address at index in the array */
	cell = ((ht->array) + index);

	if (*cell && strcmp((*cell)->key, key) == 0)
	{
		free((*cell)->value);
		(*cell)->value = value_copy;
	}
	else
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (0);

		node->key = strdup(key);
		node->value = value_copy;
		node->next = NULL;

		if (*cell)
			node->next = *cell;

		*cell = node;
	}

	return (1);
}
