#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node
 * @head: header to list
 * @index: index of node to delete
 *
 * Return: 1 / -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *del = NULL;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	temp = *head;
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
	}
	else
	{
		del = temp->next;
		temp->next = del->next;
	}
	free(del);
	return (1);
}
