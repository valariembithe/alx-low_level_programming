#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes head node of the list
 * @head: double pointer to the list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (i);
}
