#include "hash_tables.h"
/**
 * hash_table_print - print key-value pair of ht
 * @ht: hash table pointer
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	int first_entry, i;
	hash_node_t *current_node;

	if (!ht)
	{
		return;
	}
	printf("{");

	first_entry = 1;
	for (i = 0; i < (int)ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (!first_entry)
		{
			printf(", ");
		}
			printf("'%s': '%s'", current_node->key, current_node->value);
			first_entry = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}

