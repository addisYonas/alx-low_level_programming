#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s;
	listint_t *new_node;

	s = *head;

	while (s && s->next != NULL)
		s = s->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (s)
		s->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
