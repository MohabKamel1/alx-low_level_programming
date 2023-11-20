#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Enter data
 * @h: input
 * Return: Count
 */

size_t listint_len(const listint_t *h)
{
	unsigned int snode = 0;
	const listint_t *tp;

	tp = h;
	while (tp)
	{
		snode++;
		tp = tp->next;
	}

	return (snode);
}
