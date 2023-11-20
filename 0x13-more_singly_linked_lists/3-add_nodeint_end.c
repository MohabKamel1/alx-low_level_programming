#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Enter data
 * @head: input
 * @n: input
 * Return: Address
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));
	listint_t *temp;


	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = i;

	return (i);
}
