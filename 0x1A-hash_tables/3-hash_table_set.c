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
	unsigned long int i, index, size = ht->size;
	hash_node_t *node, **cell;
	char *value_copy;

	index = key_index((unsigned char *)key, size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	/* cell would contain the address at index in the array */
	cell = ((ht->array) + index);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	node = malloc(sizeof(*node));
	if (!node)
	{
		free(value_copy);
		return (0);
	}

	node->key = (char *)key;
	node->value = value_copy;
	node->next = NULL;

	*cell = node;

	return (1);
}
