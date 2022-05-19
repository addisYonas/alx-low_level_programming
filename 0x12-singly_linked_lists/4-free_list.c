#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: points to the first list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currnet;

	while (head)
	{
		currnet = head;
		head = head->next;
		free(currnet->str);
		free(currnet);
	}
}
