#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = (listint_t *) malloc(sizeof(listint_t));

	if (new_nodes == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	new_nodes->n = n;

	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}
