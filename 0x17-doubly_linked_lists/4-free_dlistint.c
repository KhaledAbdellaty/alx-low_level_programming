#include "lists.h"
/**
 * free_dlistint - a function that frees
 * a doubly linked list.
 * @head: a linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head)
		while (head->prev)
			head = head->prev;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}

