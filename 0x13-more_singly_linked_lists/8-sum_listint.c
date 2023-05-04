#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sums n in list
 * @head: pointer to head
 *
 * Return: sum on ints
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = NULL;

	if (!head)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
