#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints elements in list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
