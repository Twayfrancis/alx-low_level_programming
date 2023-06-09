#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: Size of the array
 * Author Tway
 * Return: Pointer to newly creaated has table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
