#include "lists.h"
/**
 * print_dlistint - prints dlinked list elements
 * @h: header file
 *
 * Return: value and no. of elemnents
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
