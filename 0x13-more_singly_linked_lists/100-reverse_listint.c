#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a list
 * @head: a pointer to the address of head
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);
	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	(*head)->next = back;
	return (*head);
}
