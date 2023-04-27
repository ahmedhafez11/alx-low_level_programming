#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string
 *Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int n = 0;

	while (str[n])
		n++;
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->n = n;
	new_head->next = (*head);
	(*head) = new_head;
	return (*head);
}
