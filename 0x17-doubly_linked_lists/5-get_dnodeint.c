#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node in d_linked list
 * @head: head pointer
 * @index: nth node
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}
	if (count == index)
		return (tmp);
	else
		return (NULL);
}
