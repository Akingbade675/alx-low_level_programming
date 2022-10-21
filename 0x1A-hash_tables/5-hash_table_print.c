#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **cell;
	long int size = ht->size;
	int end = 0;

	/**
	 * assign the address of the first cell
	 * of the hash table to ``cell``
	 */
	cell = ht->array;

	putchar('{');

	while (size >= 0)
	{
		/* checks if the value at the current cell is not null */
		if (*cell)
		{
			if (end)
			{
				printf(", ");
				end = 0;
			}
			printf("'%s': '%s'", (*cell)->key, (*cell)->value);
			end = 1;
		}

		cell++;
		size--;
	}

	printf("}\n");
}
