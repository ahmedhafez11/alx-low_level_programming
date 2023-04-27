#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * @head: pointer
 * @str: string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n = 0;

	while (str[n])
		n++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
