#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new
 * node at the end of a listint_t list.
 * @head: a new node
 * @n: an integer value
 * Return: the address of the new element,
 * or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t tail = malloc(sizeof(listint_t));
	listint_t temp = *head;

	if (!tail)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (!*head)
	{
		*head = tail;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = tail;

	return (tail);
}
