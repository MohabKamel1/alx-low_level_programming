#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Enter data
 * @head: input
 * @n: input
 * Return: Address
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = (*head);
	(*head) = i;
	return (*head);
}
