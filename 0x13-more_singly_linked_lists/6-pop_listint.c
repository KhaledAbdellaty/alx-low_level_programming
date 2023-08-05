#include "lists.h"
/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list
 * @head: a head of linked list
 * Return: returns the head node’s data (n)
 * or, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (value);
}
