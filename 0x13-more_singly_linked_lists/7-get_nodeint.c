#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns
 * the nth node of a listint_t linked list.
 * @head: a head of linked list
 * @index: the index of the node
 * Return: returns the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && temp; i++)
		temp = temp->next;

	return (temp);
}
