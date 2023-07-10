#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
