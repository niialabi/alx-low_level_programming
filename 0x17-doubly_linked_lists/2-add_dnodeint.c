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
	struct dlistint_s *tmp = NULL;

	tmp = malloc(sizeof(struct dlistint_s));
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	tmp->n = n;
	tmp->prev = NULL;
	*head = tmp;
	return (*head);
}
