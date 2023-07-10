#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The pointer to the string.
 * Return: the value of len.
 */
int _strlen(char *c)
{
	if (!c)
		return (0);
	return (_strlen(c + 1));
}
