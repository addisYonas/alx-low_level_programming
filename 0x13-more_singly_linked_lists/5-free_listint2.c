#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *s;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		s = *head;
		*head = (*head)->next;
		free(s);
	}

}
