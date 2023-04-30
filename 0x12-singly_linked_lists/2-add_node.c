#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at start on linked list
 * @head: pointer to head pointer
 * @str: strg to be copied
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *ptr;

	ptr = malloc(sizeof(struct list_s));
	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	*head = ptr;
	return (*head);
}
