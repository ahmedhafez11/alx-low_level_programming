#include "lists.h"
/**
 * reverse_listint - chnage list direction the last node becomes first
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next_node = old_node;
		old_node = *head;
		*head = next_node;
	}
	*head = old_node;
	return (*head);
}
