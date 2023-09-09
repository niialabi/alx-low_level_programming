#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	int i, size;
	hash_node_t *hd;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			hd = ht->array[i];
			while (hd)
			{
				free(hd->key);
				free(hd->value);
				free(hd);
				hd = hd->next;
			}

		}
	}
	free(ht->array);
	free(ht);
}
