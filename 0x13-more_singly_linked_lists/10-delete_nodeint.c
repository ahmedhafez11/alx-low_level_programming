#include "lists.h"
/**
 * delete_nodeint_at_index - remove node in linked list by index
 * @head: pointer
 * @index: node index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	while (n < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		n++;
	}
	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);
	return (1);
}
