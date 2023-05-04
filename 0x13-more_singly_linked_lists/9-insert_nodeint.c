#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert new node at nth position
 * @head: pointer to head
 * @idx: index to add node
 * @n: n element of new node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *new_node = NULL;
	unsigned int i = 0;

	if (idx > 0 && !*head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx - 1)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
