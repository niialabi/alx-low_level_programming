#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds new node to begining 
 * @head: pointer of head pointer
 * @n: int value no.
 *
 * Return: new element address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *temp;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(struct listint_s));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
