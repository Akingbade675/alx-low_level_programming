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
	unsigned long int index, size = ht->size;
	hash_node_t *node, **cell;

	index = key_index((unsigned char *)key, size);

	node = malloc(sizeof(*node));
	if (!node)
		return (0);

	node->key = (char *)key;
	node->value = strdup(value);
	node->next = NULL;

	/* cell would contain the address at index in the array */
	cell = ((ht->array) + index);

	/* check if the cell is not empty */
	/* handle collisions */
	if (*cell)
		node->next = *cell;
	*cell = node;

	return (1);
}
