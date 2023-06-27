#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: is a parameter
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
