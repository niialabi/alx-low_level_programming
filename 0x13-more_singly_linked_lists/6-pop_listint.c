#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - rmv 1st node
 * @head: pointer to head
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n_data;

	if (head == NULL)
		return (0);
	n_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n_data);
}
