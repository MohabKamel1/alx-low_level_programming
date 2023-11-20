#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Enter data
 * @head: input
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
