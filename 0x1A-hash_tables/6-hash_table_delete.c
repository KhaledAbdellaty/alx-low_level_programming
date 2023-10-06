#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current_node, *tmp;

	if (ht)
	{
		while (i < ht->size)
		{
			current_node = ht->array[i];
			while (current_node)
			{
				tmp = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = tmp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}

