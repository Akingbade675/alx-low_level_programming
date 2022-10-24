#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **cell, *node;
	long int size;
	int end = 0;

	if (!ht)
		return;
	size = ht->size;

	/* assign the address of the first cell */
	/* of the hash table to ``cell`` */
	cell = ht->array;

	putchar('{');
	while (size >= 0)
	{
		/* checks if the value at the current cell is not null */
		if (*cell)
		{
			node = *cell;
			while (node)
			{
				if (end)
				{
					printf(", ");
					end = 0;
				}
				printf("'%s': '%s'", (node)->key, (node)->value);
				end = 1;
				node = node->next;
			}
		}
		cell++;
		size--;
	}
	printf("}\n");
}
