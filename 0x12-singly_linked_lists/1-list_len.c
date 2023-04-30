#include "lists.h"

/**
 * list_len - length of elements
 * @h: pointer of list head
 *
 * Return: no. of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
