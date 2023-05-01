#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints int lists
 * @h: lists head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	struct listint_s const *ptr;

	ptr = NULL;
	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
