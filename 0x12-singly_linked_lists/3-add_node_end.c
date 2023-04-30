#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node to end of list
 * @head: pointer to head pointer
 * @str: string to insert in new node
 *
 * Return: add of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *tmp, *ptr;

	tmp = malloc(sizeof(struct list_s));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (tmp);
}
