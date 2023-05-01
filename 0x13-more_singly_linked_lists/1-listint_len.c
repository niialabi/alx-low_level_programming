#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns no. of elements
 * @h: pointer to header
 *
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	struct listint_s const *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
