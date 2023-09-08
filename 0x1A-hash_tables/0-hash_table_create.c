#include "hash_tables.h"
/**
 * hash_table_create - creates a new hashtable
 * @size: size of array
 * Return: pointer to newly created hastable
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
		return (NULL);
	return (new_hash_table);
}
