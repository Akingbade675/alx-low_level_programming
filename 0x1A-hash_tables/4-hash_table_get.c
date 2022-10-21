#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,\
 * or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size = ht->size;
	hash_node_t *node;

	index = key_index((unsigned char *)key, size);

	/* node points to the cell value at [index] */
	node = (ht->array)[index];

	/* check if the value is not null, otherwise return NULL */
	if (node)
		return (node->value);
	else
		return (NULL);
}
