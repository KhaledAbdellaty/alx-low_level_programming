#include "lists.h"

/**
 * list_len -  function that returns the number of
 * elements in a linked list
 * @h: a linked list
 * Return: returns number of the elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	if (!h)
		return (s);

	s++;
	return (list_len(h->next) + s);
}
