#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: an integer will use at most n bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; x < i && (src[x] != '\0'); x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
