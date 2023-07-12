#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * @str: is a string
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, x;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		s[x] = str[x];

	s[i] = '\0';

	return (s);
}
