#include "lists.h"
/**
 * add_dnodeint - adds node to start of list
 * @head: header
 * @n: value inside new node
 *
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(struct dlistint_s));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	if (*head == NULL)
	{
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (tmp);
}
