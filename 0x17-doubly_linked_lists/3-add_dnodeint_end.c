#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: a double pointer to the heaad
 * @n: number type int
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);

}
