#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: the first and main array
 * @src: the second array
 * @n: number of copies bytes
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
