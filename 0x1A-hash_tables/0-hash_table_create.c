#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(*new_table));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = NULL;

	return (new_table);
}
