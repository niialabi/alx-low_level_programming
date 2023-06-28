#include "lists.h"
/**
 * insert_dnodeint_at_index - ins new node @ n
 * @h: header pointer
 * @idx: l_list index where node is inserted.
 * @n: node data
 *
 * Return: address or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t list_len = 0;
	int i, j;
	dlistint_t *temp, *new_node, *h2;
	
	h2 = *h;
	for (j = 0; h2; h2 = h2->next, j++)
		;
	list_len =j;
	if (list_len < idx)
		return (NULL);
	if (!idx)
		new_node = add_dnodeint(h, n);
	else if (idx == list_len)
		new_node = add_dnodeint_end(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		for (temp = *h, i = 0; i < (int)idx; i++, temp = temp->next)
			;
		new_node->n = n;
		temp->prev->next = new_node;
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev = new_node;
	}
	return (new_node);
}
