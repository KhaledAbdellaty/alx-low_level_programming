#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: returns a string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, x, l, j;

	i = 0;
	x = 0;
	j = 0;

	while (s1 && s1[i])
		i++;

	while (s2 && s2[x])
		x++;

	l = i + x;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	if (s1)
	{
		for (l = 0; l < i; l++)
			s[l] = s1[l];
	}
	if (s2)
	{
		for (; l < (i + x); l++)
		{
			s[l] = s2[j];
			j++;
		}
	}
	s[l] = '\0';
	return (s);
}
