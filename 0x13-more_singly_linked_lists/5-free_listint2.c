#include "lists.h"

/**
 * free_listint2 - a function that frees alinked list
 * @head: the pointer to singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return (NULL);

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
