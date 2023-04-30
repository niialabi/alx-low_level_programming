#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints list of all elements
 * @h: Pointer to struct_type list_t
 *
 * Return: no. of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	}
	return (i);
}
