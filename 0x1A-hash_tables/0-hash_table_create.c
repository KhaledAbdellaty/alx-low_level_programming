#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array.
 * Return: returns a pointer to the newly created hash table,
 * or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
		return (NULL);

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
