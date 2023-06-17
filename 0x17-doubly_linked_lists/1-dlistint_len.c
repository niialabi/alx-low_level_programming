#include "lists.h"
/**
 * dlistint_len - func that returns length of list
 * @h: header
 *
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
