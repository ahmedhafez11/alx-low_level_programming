#include "lists.h"
/**
 * listint_len - find the number of nodes in linked list
 * @h: the linked list
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
