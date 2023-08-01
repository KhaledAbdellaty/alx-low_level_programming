#include "list.h"

/**
 * listint_len -  a function that returns the number
 * of elements in a linked listint_t list.
 * @h: a singly linked list
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
