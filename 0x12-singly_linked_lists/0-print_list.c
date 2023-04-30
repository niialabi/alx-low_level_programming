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
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
