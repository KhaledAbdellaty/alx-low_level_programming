#include "main.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a linked list
 * @head: a linked list
 * @str: a string
 * Return: returns the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, tmp;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = str;
	new->len = len;
	new->next = NULL;
	tmp = *head;

	if (!tmp)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}
	return (*head);
}
