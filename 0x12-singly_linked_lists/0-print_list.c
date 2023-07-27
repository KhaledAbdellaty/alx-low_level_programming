#include "lists.h"

/**
 * print_list - a function that prints all elements
 * of a single linked list
 * @h: is a single linked list
 * Return: returns the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	if (!h)
		return (s);

	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)");

	s++;
	return (print_list(h->next) + s);
}
