#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
