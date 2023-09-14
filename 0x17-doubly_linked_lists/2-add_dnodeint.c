#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a doubly linked list.
 * @head: the head of a linked list.
 * @n: the value in the node.
 * Return: returns the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head)
		while ((*head)->prev)
			*head = (*head)->prev;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
