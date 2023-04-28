#include "lists.h"
/**
 * free_listint2 - makes the linked list free
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;
	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}
	*head = NULL;
}
