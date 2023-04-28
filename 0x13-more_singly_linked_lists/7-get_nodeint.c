#include "lists.h"
/**
 * get_nodeint_at_index - find node in linked list by index
 * @head: head node
 * @index: node index
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp_node = head;

	while (temp_node && n < index)
	{
		temp_node = temp_node->next;
		n++;
	}
	return (temp_node ? temp_node : NULL);
}
