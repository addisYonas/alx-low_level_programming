#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head of node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *s;
	int n;

	if (head == NULL)
		return (0);

	s = *head;
	if (s == NULL)
		return (0);

	n = s->n;
	*head = s->next;
	free(s);

	return (n);
}
