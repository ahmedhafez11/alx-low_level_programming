#include "lists.h"
/**
 * pop_listint - pop the head of linked list
 * @head: pointer
 * Return: what is found inside the linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (i);
}
