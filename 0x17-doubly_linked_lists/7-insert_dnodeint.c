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
	unsigned int i = 1;
	dlistint_t *new_node;
	dlistint_t *head;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	head = *h;
	while (head->prev)
		head = head->prev;
	while (head && i <= idx)
	{
		if (i == idx)
		{
			if (!head->next)
			{
				new_node = add_dnodeint_end(h, n);
				return (new_node);
			}
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->prev = head;
			new_node->next = head->next;
			head->next->prev = new_node;
			return (new_node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
