#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag = 1;
	unsigned long int i = 0;
	hash_node_t *current_node;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			flag = 0;
			current_node = current_node->next;
		}
		i++;
	}
	printf("}\n");
}
