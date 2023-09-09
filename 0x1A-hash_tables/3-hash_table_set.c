#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to be ammended
 * @key: key of key-value fame
 * @value: value assoc. with key
 *
 * Return: 1-success/0-fail
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declaring variable needed to implement code*/
	int idx;
	char *duplicated_value = NULL;
	hash_node_t *fresh_node;
	hash_node_t *hd;


	/* implementing conditions and requirements */
	if (!key || !ht || *key == '\0' || !value)
		return (0);
	duplicated_value = strdup(value);
	if (!duplicated_value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	/* check if key already exists*/
	if (ht->array[idx] && !strcmp(ht->array[idx]->key, key))
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = duplicated_value;
		return (1);
	}
	for (hd = ht->array[idx]; hd; hd = hd->next)
	{
		if (!strcmp(hd->key, key))
		{
			free(hd->value);
			hd->value = duplicated_value;
			return (1);
		}
	}
	fresh_node = malloc(sizeof(hash_node_t));
	if (!fresh_node)
		return (0);
	fresh_node->key = strdup(key);
	if (!fresh_node->key)
		return (0);
	fresh_node->value = duplicated_value;
	fresh_node->next = ht->array[idx];
	ht->array[idx] = fresh_node;
	return (1);
}
