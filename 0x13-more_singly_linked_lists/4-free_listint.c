#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -frees a listint_t list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *s;
	listint_t *next;

	s = head;

	while (s != NULL)	
	{
		next = s->next;
		free(s);
		s = next;
	}
}
