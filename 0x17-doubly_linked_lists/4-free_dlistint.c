#include "lists.h"
/**
 * free_dlistint - frees dynamically alocated memory
 * @head: head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
