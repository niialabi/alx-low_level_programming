#include "lists.h"
/**
 * sum_dlistint - sums all n components
 * @head: head pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (!head)
		return (0);
	tmp = head;
	for (sum = 0; tmp != NULL; sum = sum + tmp->n, tmp = tmp->next)
		;
	return (sum);
}
