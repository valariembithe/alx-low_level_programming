#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
