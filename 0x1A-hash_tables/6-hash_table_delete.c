#include "hash_tables.h"

void free_list(hash_node_t *list);

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **cell;
	long int size = ht->size;

	cell = ht->array;
	while (size >= 0)
	{
		if (*cell)
			free_list(*cell);

		cell++;
		size--;
	}

	free(ht->array);
}


/**
 * free_list - frees linked list
 * @list: linked list
 */
void free_list(hash_node_t *list)
{
	if (!list)
		return;

	free_list(list->next);
	free(list);
}
