#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node n
 * @head: header pointer
 * @index: index were del deleted.
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len;
	int i, j;
	dlistint_t *temp, *head2;

	head2 = *head;
	for (j = 0; head2; head2 = head2->next, j++)
		;
	len = j - 1;
	if (!(*head) || len < index)
		return (-1);
	temp = *head;
	if (len == 0 && index == 0)
	{
		*head = NULL;
	}
	else if (!index)
	{
		(*head)->next->prev = NULL;
		(*head) = (*head)->next;
	}
	else if (index == len)
	{
		for (temp = *head; temp->next; temp = temp->next)
			;
		temp->prev->next = NULL;
	}
	else
	{
		for (temp = *head, i = 0; i < (int)index; i++, temp = temp->next)
			;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
