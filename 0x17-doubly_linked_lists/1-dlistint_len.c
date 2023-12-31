#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 * of the elements in a doubly linked list.
 * @h : a doubly linked list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

