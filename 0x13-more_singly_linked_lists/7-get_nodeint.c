#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to the head of list
 * @index: loops through the list
 *
 * Return: the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (0);

		head = head->next;
	}
	return (head);
}
