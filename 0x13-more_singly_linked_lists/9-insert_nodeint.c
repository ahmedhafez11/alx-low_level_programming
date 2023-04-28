#include "lists.h"
/**
 * insert_nodeint_at_index - add node to list by index
 * @head: pointer
 * @idx: node index
 * @n: what to insert in linked list
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}
	return (NULL);
}
