#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: input
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
