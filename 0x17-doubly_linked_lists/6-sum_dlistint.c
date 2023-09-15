#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a doubly linked list.
 * @head: a doubly linked list.
 * Return: the sum of all data, or
 * if the list is empty, return 0 .
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
