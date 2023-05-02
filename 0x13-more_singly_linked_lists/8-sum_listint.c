#include "lists.h"
/**
 * sum_listint - get the sum of all elements of lniked list
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		i += temp_node->n;
		temp_node = temp_node->next;
	}
	return (i);
}
