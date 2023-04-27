#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at beginning of list
 * @head: double pointer to list
 * @str: string to be added
 *
 * Return: address of new element else null
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
