#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns no. of elements
 * @h: pointer to header
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	struct listint_s *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		if (i > index)
			return (NULL);
		if (i == index)
		{
			break;
		}
		temp = temp->next;
		i++;
	}
	return (temp);
}
