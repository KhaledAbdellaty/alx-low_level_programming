#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: a doubly linked list.
 * @idx: the index of the list where the new node
 * should be added.
 * @n: the value of the node.
 * Return: returns the address of the new node,
 * or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;

	while (*h && i <= idx)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;
			new_node->prev = *h;
			new_node->next = (*h)->next;
			(*h)->next = new_node;
			return (new_node);
		}
		*h = (*h)->next;
		i++;
	}
	return (NULL);
}
