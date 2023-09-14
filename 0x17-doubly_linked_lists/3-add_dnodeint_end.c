#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a doubly linked list.
 * @head: the head of a linked list.
 * @n: the value in the node.
 * Return: returns the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head)
		while ((*head)->next)
			*head = (*head)->next;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
		(*head)->next = new;
	else
		*head = new;

	new->prev = *head;
	return (new);
}

