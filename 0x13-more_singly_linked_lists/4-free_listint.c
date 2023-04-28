#include "lists.h"
/**
 * free_listint - make the linked list free of elements
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
