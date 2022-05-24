#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *s;
	int sum = 0;

	if (head == NULL)
		return (0);

	s = head;

	while (s != NULL)
	{
		sum += s->n;
		s = s->next;
	}

	return (sum);
}
