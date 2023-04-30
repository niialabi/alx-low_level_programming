#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees alloc memory
 * @head: pointer to strt of list
 *
 */
void free_list(list_t *head)
{
	struct list_s *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp->len);
		free(tmp);
	}
}
