#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: an array
 * @b: constant byte
 * @n: the first n elements in the array
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
