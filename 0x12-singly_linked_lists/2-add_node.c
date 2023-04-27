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
	list_t *new_head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = len;
	new_head->next = (*head);
	(*head) = new_head;
	return (*head);
}
