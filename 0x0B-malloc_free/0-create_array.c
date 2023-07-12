#include "main.h"
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char
 * @size: is size of the array
 * @c: is a char
 * Return: returns array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	s[i] = '\0';

	return (s);
}
