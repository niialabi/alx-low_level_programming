#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns no. of elements
 * @head: pointer to header
 * @index: node index in list
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	struct listint_s *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
