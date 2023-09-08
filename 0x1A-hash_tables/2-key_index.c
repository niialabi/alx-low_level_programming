#include "hash_tables.h"
/**
 * key_index - returns index to store k-v pair
 * @key: key of key-value fame
 * @size: size of hash table array
 *
 * Return: index
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
