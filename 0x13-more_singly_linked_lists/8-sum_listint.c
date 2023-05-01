#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sum of integers in a list
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
