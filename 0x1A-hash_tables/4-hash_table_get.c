#include "hash_tables.h"
/**
 * hash_table_get - retrievs value ass. with key
 * @ht: pointer ot hash table
 * @key: key of key value fame
 * Return: value ass. with index or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *hd;

	if (!key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] && !strcmp(ht->array[idx]->key, key))
		return (ht->array[idx]->value);
	for (hd = ht->array[idx]; hd; hd = hd->next)
	{
		if (!strcmp(hd->key, key))
			return (hd->value);
	}
	return (NULL);
}
